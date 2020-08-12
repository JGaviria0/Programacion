/*  
https://cses.fi/problemset/task/1636
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;
const int oo = 1e9;
const int limit = 1000006;

int dp[limit][105], n, coin[102], res, newT;

int solve (int x, int f){

    if (x<0) return 0;
    if (x==0) return 1;
    if (f < 0) return 0;
    int &ans = dp[x][f];

    if (ans != -1) return ans;
    ans = 0;

    ans = (solve(x, f-1) + solve(x - coin[f],f))%((int)1e9 + 7);
    return ans;
}

int main (){

    int x;
    cin >> n >> x;

    memset(dp, -1, sizeof dp);

    for(int i=0; i<n; i++)
        cin >> coin[i];
    
    sort(coin, coin + n);

    newT = 1;

    for(int i=1; i<n; i++)
    {
        if (coin[i] != coin[i-1])
        {
            coin[newT] = coin[i];
            newT++;
        }
    }

    cout << solve(x, newT-1) << endl;
}