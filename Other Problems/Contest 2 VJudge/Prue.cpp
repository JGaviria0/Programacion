#include <bits/stdc++.h> 
using namespace std; 


#define UNASSIGNED 0 
#define N 9 

int grid[10][10]; 
  
bool isSafe() 
{ 
    // Hashmap for row column and boxes 
    unordered_map<int, int> 
        row_[9], column_[9], box[3][3]; 
    for (int row = 0; row < N; row++) { 
        for (int col = 0; col < N; col++) { 
            // mark the element in row column and box 
            row_[row][grid[row][col]] += 1; 
            column_[col][grid[row][col]] += 1; 
            box[row / 3][col / 3][grid[row][col]] += 1; 
  
            // if an element is already 
            // present in the hashmap 
            if ( 
                box[row / 3][col / 3][grid[row][col]] > 1 
                || column_[col][grid[row][col]] > 1 
                || row_[row][grid[row][col]] > 1) 
                return false; 
        } 
    } 
    return true; 
} 
  

bool SolveSudoku(int i, int j) 
{ 
    // if the index reached the end 
    if (i == N - 1 && j == N) { 
        // if the matrix is safe 
        if (isSafe()) { 
            // print and stop 
            return true; 
        } 
  
        // else try other cases 
        return false; 
    } 
  
    // end of a row move to next row 
    if (j == N) { 
        i++; 
        j = 0; 
    } 
  
    // if the element is non zero keep as it is 
    if (grid[i][j] != UNASSIGNED) 
        return SolveSudoku( i, j + 1); 
  
    // consider digits 1 to 9 
    for (int num = 1; num <= 9; num++) { 
        // assign and call recursively 
        grid[i][j] = num; 
  
        if (SolveSudoku( i, j + 1)) 
            return true; 
  
        grid[i][j] = 0; 
    } 
    return false; 
} 

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int n, grid[10][10]; 
    string aux;

    cin >> n; 

    for(int j=1; j<=n; j++){
        cout << "Case " << j << ":" << endl; 

        for(int i=0; i<9; i++){
            cin >> aux; 
            for(int k=0; k<9; k++){
                if(aux[k] == '.')
                    grid[i][k] = 0; 
                else 
                    grid[i][k] = aux[k] - '0';
            }
        }

        if (SolveSudoku( 0, 0) != true) 
            cout << "No solution exists"; 

        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++)
                cout << grid[i][j]; 
            cout << endl; 
        }
    }
}