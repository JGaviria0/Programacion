/*  
https://cses.fi/problemset/task/1636
Metodo: DP(Iterativo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;
const int oo = 1e9;
const int limit = 1000006;

int dp[limit], n, coin[102], res;


int main (){

    int x;
    cin >> n >> x;

    memset(dp, 0, sizeof dp);

    for(int i=0; i<n; i++)
        cin >> coin[i];

    dp[0] = 1;
    
    for (int j=0; j<n; j++) 
    
    {
        for (int i=0; i<=x; i++)
        {
            if (i + coin[j] <= x)
                dp[i + coin[j]] = (dp[i] + dp[i + coin[j]])%((int)1e9 + 7);
        }
    }

    cout << dp[x] << endl;
}