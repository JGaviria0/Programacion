/*  
https://cses.fi/problemset/task/1624
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;



int main () {

    string row; 

    for(int i=0; i<8; i++)  {
        cin >> row;
        for(int j =0; j<8; j++) {
            if( row[j] == '*') {
                board[i][j] = -1; 
            } else {
                board[i][j] = 0; 
            }
        }
    }

    cout << solve(0,0) << endl; 

   
}
