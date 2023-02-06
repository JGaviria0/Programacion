/*  
https://leetcode.com/problems/unique-paths/
Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

class Solution {
public:
    int cache[103][103];
    int M, N;
    int dp(int x, int y){

        if(x == M-1 && y == N-1){
            return cache[x][y] = 1; 
        }

        if(y > N-1 || x > M-1){
            return 0; 
        }

        if(cache[x][y] != -1) return cache[x][y];

        return cache[x][y] = dp(x+1, y) + dp(x, y+1);
    }

    int uniquePaths(int m, int n) {
        M = m; 
        N = n; 
        memset(cache,-1, sizeof (cache));
        dp(0,0);
        

        // for(int i=0; i<=M; i++){
        //     for(int j=0; j<=N; j++){
        //         cout << cache[i][j] << " ";
        //     }
        //     cout << endl; 
        // }
        return cache[0][0];
    }
};

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n >> m; 

    Solution a; 
    cout << a.uniquePaths(n, m) << endl;
}