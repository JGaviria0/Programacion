#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+10; 

int dp[1000006]; 

int solve( int n, int a[], int x){

    if(x ==0 ) return 0; 

    if(x < 0) return oo; 

    if(dp[x] != -1) return dp[x];

    int &ans = dp[x]; 
    ans = oo; 
    for(int i=0; i<n; i++){
        ans = min(ans, 1 + solve(n, a, x - a[i]));
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
    cout << (ans != oo ? ans : -1)  << endl;
}