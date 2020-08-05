/*  
https://cses.fi/problemset/task/1158
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/       

#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
const int limit = 100005;
const int MOD = 1e9 + 7;

int dp[limit][100], n, m, number[limit]; 

int solve(int x, int i){
    
    if (number[x] - number[x+1] )
    if (x==n) return 1;

    



    int &ans = dp[x];

    for (int i=0; i<m; i++)
        ans = ans + solve()

    
}

int main (){

    cin >> n >> m;

    for (int i=0; i<n; i++)
        cin >> number[i];
    
    
            
    cout << solve(0, 0) << endl;
    
}