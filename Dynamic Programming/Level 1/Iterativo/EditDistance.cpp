/*  
https://cses.fi/problemset/task/1639
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int n, dp[5005][5005];
string a, b;

int main (){

    cin >> a >> b;

    dp[0][0] = 0;
    
    for (int i=1; i<=a.size(); i++)
        dp[i][0] = dp[i-1][0] + 1;

    for (int i=1; i<=b.size(); i++)
        dp[0][i] = dp[0][i-1] + 1;
    
    for (int i=1; i<=a.size(); i++)
        for (int j=1; j<=b.size(); j++)
        {
            if(a[i-1] == b[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min ({dp[i-1][j-1] + 1, dp[i-1][j] + 1, dp[i][j-1] + 1});    
        }
    
    cout << dp[a.size()][b.size()] << endl;

}