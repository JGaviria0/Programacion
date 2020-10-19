/*  
https://cses.fi/problemset/task/1712
Metodo: Math
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

string maze[1007];
int n, m; 

int visit[1007][1007];
string fini [1007];
int cont = 0;


void bfs(int x, int y, string ans) {
    int direX [] = {-1, 0, 1, 0};
    char dire [] = {'U', 'R', 'D', 'L'}; 
    int direY [] = {0, 1, 0, -1};   
    
}

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int salidax, saliday; 
    cin >> n >> m; 

    for (int i=0; i<n; i++) {
        cin >> maze[i];
        for(int j=0; j<m; j++) {
            if(maze[i][j] == 'A') {
                salidax = i;
                saliday = j; 
            }
        }
    }

    bfs(salidax, saliday, "");    

    if(cont == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << mini << endl;
        cout << minstr << endl;
    }

    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cout << visit[i][j] << " ";
        }
        cout << endl;
    }


}