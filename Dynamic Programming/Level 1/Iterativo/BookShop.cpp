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

int dp[100005], book[limit], price[limit]; 


int main (){

    int n,m;

    cin >> n >> m;

    for (int i=0; i<n; i++)
        cin >> price[i];
    
    for (int i=0; i<n; i++)
        cin >> book[i];
    
    dp[0] = 0;

    for (int i=0; i<=n; i++)
    {
        for (int j=m; j>=price[i]; j--)
        {
            dp[j] = max( dp[j], book[i] + dp[j - price[i]]);
        }
    }
    /*
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=m; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    */

    cout << dp[m]<< endl;
}