/*  
https://cses.fi/problemset/task/1744
Metodo: DP(Iterativo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

const int maxi = 5004;

pair <long long , long long > dp[maxi][maxi];

int main (){

    long long n, number[maxi];

    cin >> n;
    
    for(int i=1; i<=n; i++)
    {
        cin >> number[i]; 
        dp[i][i].first = number[i];
        dp[i][i].second = 0;
    }
        
    for(int k=1; k<=n; k++)
    {
        for(int i=0; i<=n - k + 1; i++) 
        {
            long long j = i + k - 1;
            if (dp[i+1][j].second + number[i]>dp[i][j-1].second + number[j])
            {
                dp[i][j].first = dp[i+1][j].second + number[i];
                dp[i][j].second =dp[i+1][j].first;
            }   
            else
            {
                dp[i][j].first = dp[i][j-1].second + number[j]; 
                dp[i][j].second =dp[i][j-1].first;
            }
        }
    }

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++)
    //     {
    //         cout << dp[i][j].first <<"," << dp[i][j].second << " "; 
    //     }
    //     cout << endl;
    // }
        

    cout << dp[1][n].first << endl; 
}