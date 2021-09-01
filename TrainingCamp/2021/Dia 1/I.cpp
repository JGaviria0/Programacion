#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int girox [] = {0,0,1,0,-1};  
int giroy [] = {0,1,0,-1,0};
int n, m; 

bool solve(string s[], int i, int j, int move, int turns){

    if (s[i][j] == 'T') return true; 

    if (turns > 2) return false; 
    bool ans ;
    if (i + girox[move] >= 0 && i + girox[move] < m && j + giroy[move] >=0 && j + giroy[move] < n && s[i + girox[move]][j + giroy[move]] == '.'){
        ans = solve( s,  i + girox[move], j + giroy[move], move, turns);
    } else {
        for(int k=1; k<5; k++){
            if (i + girox[k] >= 0 && i + girox[k] < m && j + giroy[k] >=0 && j + giroy[k] < n){
                if(s[i + girox[k]][j + giroy[k]] == '.'){
                    ans = solve( s,  i + girox[k], j + giroy[k], k, turns + 1);
                }
            }
        }
    }
    return ans; 
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    string grid[10006]; 
    cin >> n >> m;
    int x, y; 
    int xi, yi;   

    for (int i=0; i<m; i++){
        cin >> grid[i];
        for(int j=0; j<grid[i].length(); j++){
            if(grid[i][j] == 'S'){
                y = i;
                x = j;  
            }
        }
    }

    if (solve(grid, x,y,0,0)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0; 
}
