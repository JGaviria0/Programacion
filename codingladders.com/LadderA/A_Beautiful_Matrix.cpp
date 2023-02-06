/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 



int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n = 5, aux; 
    int row, col; 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> aux;  
            if(aux == 1){
                row = i; 
                col = j;
            }
        }
    }

    cout << abs(2 - col ) + abs(2 - row) << endl; 
}