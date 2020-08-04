/*   
https://cses.fi/problemset/task/1634
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;
const int oo = 1e9;
const int limit = 1000006;

int dp[limit], n, moneda[102], res;

int solve (int x){

    if (x < 0)  return oo;
    if (x == 0) return 0;
    if (dp[x] != -1) return dp[x];
    int &ans = dp[x];
    ans = oo;

    for(int i=0; i<n; i++)
    {
        ans = min (ans, solve(x-moneda[i]) + 1);
    }
    return ans;
}

int main (){
    int x;
    cin >> n >> x;

    memset(dp, -1, sizeof dp);

    for(int i=0; i<n; i++)
        cin >> moneda[i];
    
    int aux = solve (x);

    if ( aux == oo )
        cout << "-1" << endl;
    else
        cout << aux << endl;
}