#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7; 


long long dp[1000006]; 

int solve( int n, int a[], int x){

    if(x ==0 ) return 1; 

    if(x < 0) return 0; 

    if(dp[x] != -1) return dp[x];

    long long &ans = dp[x]; 
    ans = 0; 
    for(int i=0; i<n; i++){
        ans = (ans + solve(n, a, x - a[i]))%mod;
    }
    return ans; 
}


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, x; 

    cin >> n >> x; 
    int a[1000006];
    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    memset(dp, -1, sizeof dp);
    int ans = solve(n, a, x);
    cout << ans << endl;
}