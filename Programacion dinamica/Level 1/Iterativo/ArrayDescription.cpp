/*  
https://cses.fi/problemset/task/1158
Metodo: DP(Iterativo)
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

    dp[1][1] = 1; 
    for (int k =1; k<=m; k++){
        
        if (number[0] == 0 || number[0] == k)
            dp[0][k] = 1;
        else
            dp[0][k] = 0;
    }
    for (int i =1; i<=n; i++)
        for (int j = 1; j<=m; j++)
        {
            if ()
        }


    cout << res << endl;
}
