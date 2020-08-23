#include <bits/stdc++.h>

using namespace std; 

int sudoku[10][10], parciali, parcialj;

bool find(){
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++){
            if (sudoku[i][j] == 0){ 
                parciali = i; 
                parcialj = j;
                return false;  
            }
        }
    return true; 
}

bool could(int i, int j){
    // row
    for(int k=0; k<9; k++){
        if(sudoku[i][k] == sudoku[i][j] && j != k){
            return false; 
        }
    }

    //columns
    for(int k=0; k<9; k++){
        if(sudoku[k][j] == sudoku[i][j] && i != k){
            return false; 
        }
    }
    //block
    int boxX = i/3; 
    int boxY = j/3; 

    for(int k = boxX*3; k<boxX*3+3; k++)
        for(int l = boxY*3; l<boxY*3+3; l++)
            if(sudoku[k][l] == sudoku[i][j] && (k != i) && (l != j))
                return false;
    
    return true; 
}

bool solve(){

    if(find())
        return true;
     
    int i = parciali, j = parcialj;

    for(int k=1; k<10; k++){
        sudoku[i][j] = k; 
        if(could(i,j))
        {
            if(solve())
                return true; 
            sudoku[i][j] = 0; 
        }
        else
        {
            sudoku[i][j] = 0; 
        }
    }
    return false;   
}

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int n; 
    string aux;

    cin >> n; 

    for(int j=1; j<=n; j++){
        cout << "Case " << j << ":" << endl; 

        for(int i=0; i<9; i++){
            cin >> aux; 
            for(int k=0; k<9; k++){
                if(aux[k] == '.')
                    sudoku[i][k] = 0; 
                else 
                    sudoku[i][k] = aux[k] - '0';
            }
        }

        solve(); 

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++)
                cout << sudoku[i][j]; 
            cout << endl; 
        }
    }
}