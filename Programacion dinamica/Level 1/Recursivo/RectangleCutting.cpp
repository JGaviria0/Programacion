/*  
https://cses.fi/problemset/task/1744
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int dp[505][505];

int main () {

    int a, b, ans; 

    cin >> a >> b;

    dp[0][0] = 0;

    for (int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            if (i == j)
                dp[i][j] = 0;
            
            else {

                ans = 5005; 

                for(int k = 1; k < i; k++)
                    ans = min (ans, dp[i-k][j] + dp[k][j] + 1);

                for(int k = 1; k < j; k++)
                    ans = min (ans, dp[i][j-k] + dp[i][k] + 1);
                
                dp[i][j] = ans;
            }
        }
    }
      
    cout << dp[a][b] << endl;

}