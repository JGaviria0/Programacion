#include <bits/stdc++.h>

using namespace std; 

const int oo = 1e9; 

int dp[1000006];

int solve(int n) {
    // cout << n << endl; 
    if(n == 0 ) return 0; 
    if(n <0) return oo; 

    int &ans = dp[n]; 

    if(ans != -1) return ans; 

    ans = oo;
    int number = n;

    while(number != 0){
        ans = min(ans, 1 + solve(n - number%10));
        number/=10; 
    }

    return ans ; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset(dp, -1, sizeof dp);
    int n, m; 

    cin >> n; 

    cout << solve(n) << endl; 
}