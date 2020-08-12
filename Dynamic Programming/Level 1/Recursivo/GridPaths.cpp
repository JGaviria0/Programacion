/*  
https://cses.fi/problemset/task/1638/
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/       

#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
const int limit = 1000006;
const int MOD = 1e9 + 7;

int dp[1004][1004], n, aux; 
string cell[1004];

int solve (int y, int x){

    if( cell[y][x] == '*')
        return 0;

    if (x==n-1 && y==n-1)
        return 1;

    int &ans = dp[y][x];

    if(ans != -1) return ans;

    ans = 0;

    if (x == n-1) return ans = solve(y+1, x)%MOD;

    if (y == n-1) return ans = solve(y, x+1)%MOD;

    return ans = (solve(y+1,x) + solve(y,x+1))%MOD;
}

int main (){

    cin >> n;

    memset(dp, -1, sizeof dp);

    for(int i=0; i<n; i++)
        cin >> cell[i];
    
    cout << solve(0,0) << endl;
}