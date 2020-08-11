/*  
https://cses.fi/problemset/task/1652
Metodo: segment tree
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

string forest[1003];
int n, q, garden[1003][1003]; 

void build(){

    for (int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            if(forest[i-1][j-1] == '*')
            {
                garden[i][j] = 1 + garden[i-1][j] + garden[i][j-1] - garden[i-1][j-1];
            }
            else
            {
                garden[i][j] = garden[i-1][j] + garden[i][j-1] - garden[i-1][j-1];
            }
        }
}

void query(int x, int y, int x2, int y2){

    cout << garden[x2][y2] + garden[x-1][y-1] - garden[x2][y-1] - garden[x-1][y2] << endl; 
}

int main(){

    int x, y, x2, y2; 

    cin >> n >> q; 

    for(int i=0; i<n; i++)
        cin >> forest[i]; 
    
    build();


    while(q--){
        cin >> y >> x >> y2 >> x2; 
        query(y,x,y2,x2); 
    }
}