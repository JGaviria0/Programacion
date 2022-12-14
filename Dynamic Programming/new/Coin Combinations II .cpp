#include <bits/stdc++.h>

using namespace std;
const long long mod = 1e9 + 7; 


long long dp[1000006][106]; 

int solve( int n, int a[], int x, int pos){
    cout << pos << " " << x << endl; 
    if(x == 0 ) return 1; 
    if(pos < 0) return 0; 
    if(x < 0) return 0; 

    if(dp[x][pos] != -1) return dp[x][pos];

    long long &ans = dp[x][pos]; 
    ans = 0; 
    
    ans = (ans + solve(n, a, x - a[pos], pos) + solve(n, a, x, pos-1 ))%mod;
    // cout << ans << endl; 
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

    sort(a, a+n);

    memset(dp, -1, sizeof dp);
    int ans = solve(n, a, x, n-1);
    cout << ans << endl;
}