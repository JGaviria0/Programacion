/*  
https://cses.fi/problemset/task/1158
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/       

#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
const int limit = 1003;
const int MOD = 1e9 + 7;

int dp[100005][limit], pages[limit], price[limit]; 

int solve(int n, int m){

    if (n<0) return 0;

    int &ans = dp[m][n];

    if (ans != -1) return ans;

    ans = 0;

    if (m - price[n] < 0)
        ans = solve(n-1, m);
    else
        ans = max (solve (n-1, m - price[n]) + pages[n], solve(n-1, m));

    return ans;

}


int main (){

    int n,m;
    
    memset(dp, -1, sizeof dp);

    cin >> n >> m;

    for (int i=0; i<n; i++)
        cin >> price[i];
    
    for (int i=0; i<n; i++)
        cin >> pages[i];

    cout << solve(n-1, m) << endl;

}