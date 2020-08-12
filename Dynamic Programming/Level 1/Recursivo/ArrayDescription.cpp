/*  
https://cses.fi/problemset/task/1158
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/       

#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
const int limit = 100005;
const int MOD = 1e9 + 7;

int dp[limit][105], n, m, number[limit]; 

int solve(int x, int y){

    if (y != number[x] && number[x] != 0) return 0;

    if (x == n-1) return 1;

    int &ans = dp[x][y];

    if( ans != -1) return ans;

    ans = 0;

    for (int i=-1; i<=1; i++)
    {
        if(i+y <= m && i+y > 0)
            ans = (ans + solve(x+1, i+y))%MOD;
    }

    return ans;
}

int main (){

    int res = 0;

    cin >> n >> m;

    memset(dp, -1, sizeof dp);

    for (int i=0; i<n; i++)
        cin >> number[i];

    for (int i =1; i<=m; i++)
        res = (res + solve(0, i) )%MOD;

    cout << res << endl;

}