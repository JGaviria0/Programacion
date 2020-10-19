/*  
https://cses.fi/problemset/task/1192
Metodo: Math
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 
int n, m; 
string mapR [1007];
int visit[1007][1007];
int direX [] = {-1, 0, 1, 0};
int direY [] = {0, 1, 0, -1};

void dfs (int x, int y) {
    if(mapR[x][y] == '.') {
        if(visit[x][y] == 0) {
            visit[x][y] = 1; 
            for(int i=0; i<4; i++) {
                int movex = x + direX[i], movey = y + direY[i];
                if(movex >=0 && movey >=0 && movex <= n && movey <= m) {
                    dfs(movex, movey);
                }
            }
        }
    }
}

int main () {

    cin >> n >> m;

    for(int i=0; i<n; i++) {
        cin >> mapR[i];
    }

    int cont = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(visit[i][j] == 0 && mapR[i][j] == '.') {
                dfs(i,j);
                cont ++;
            }
        }
    }
    cout << cont << endl;
}