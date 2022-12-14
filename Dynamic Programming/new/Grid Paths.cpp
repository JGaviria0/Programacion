#include <bits/stdc++.h>

using namespace std;

int dp[1003][1003];
const int MOD = 1e9 + 7; 

int solve( int n, string matrix[], int i, int j) {
    // cout << i << " " << j << endl; 
    if( matrix[i][j]== '*')  return 0; 
    if(i == n-1 && j == n-1) return 1; 
    if(i > n-1 || j > n-1) return 0; 


    int &ans = dp[i][j];
    if(ans != -1) return ans; 

    ans = 0; 

    ans = (ans + solve(n, matrix, i + 1, j) + solve(n, matrix, i, j+1) )%MOD;

    return ans ;
   
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    memset(dp, -1, sizeof dp);

    string matrix[1006];

    for(int i=0; i<n; i++){
        cin >> matrix[i];
    }

    cout << solve(n, matrix, 0, 0) << endl; 
}