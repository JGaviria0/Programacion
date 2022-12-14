#include <bits/stdc++.h>

using namespace std; 

long long dp[1000006];
const long long mod = 1e9 + 7; 

int solve(int n){
    if(n == 0) return 1;
    if(n < 0) return 0; 

    int k = n > 6 ? 6 : n; 

    if (dp[n] != -1) return dp[n];

    long long &ans = dp[n];
    ans = 0; 
    for(int i=1; i<=k; i++){
        ans = (ans + solve(n-i))%mod;
    }

    return ans;
}


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n, m; 
    memset(dp, -1, sizeof dp);

    cin >> n;

    cout << solve(n) << endl;
}