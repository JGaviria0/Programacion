/*  
https://cses.fi/problemset/task/1635
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;
const int oo = 1e9;
const int limit = 1000006;

int dp[limit], n, coin[102], res;

int solve (int x){

    if (x<0) return 0;
    if (x==0) return 1;
    int &ans = dp[x];

    if (ans != -1) return ans;
    ans = 0;

    for (int i=0; i<n; i++)
        ans = (ans + solve(x - coin[i]))%((int)1e9 + 7);
    return ans;

}

int main (){

    int x;
    cin >> n >> x;

    memset(dp, -1, sizeof dp);

    for(int i=0; i<n; i++)
        cin >> coin[i];

    cout << solve(x) << endl;
}