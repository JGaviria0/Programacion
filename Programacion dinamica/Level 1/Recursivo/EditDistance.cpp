/*  
https://cses.fi/problemset/task/1639
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int n, dp[5000][5000];
string a, b;

int solve(int i, int j){

    if(i == 0 || j == 0)
        if(a[i] == b[j])
            return dp[i][j] = i
            
            ;
        else 
            return dp[i][j] = 1;

    if (dp[i][j] != -1)
        return dp[i][j];
    
    dp[i][j] = 0;

    if(a[i] == b[j])
        return dp[i][j] = solve(i-1,j-1);
    else
        return dp[i][j] = min({solve(i-1, j-1)+1, solve(i, j-1)+1, solve(i-1,j)+1});  

}

int main (){

    cin >> a >> b;

    memset(dp, -1, sizeof dp);

    cout << solve(a.size()-1, b.size()-1) << endl;

    // for(int i = 0; i<a.size(); i++)
    // {
    //     for(int j = 0; j<b.size(); j++)
    //         cout << dp[i][j] << " "; 
    //     cout << endl;
    // }
}