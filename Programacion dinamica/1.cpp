/*
http://lightoj.com/volume_showproblem.php?problem=1004
Metodo: DP
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, dp[202][202];
vector < vector <int>> rombo(202);

int solve (int y, int x) { 
    
    if (x >=rombo[y].size() || x < 0)
        return 0;

    if (y == (n*2)-1)
        return rombo [y][x];

    if (dp[y][x] != -1)
        return dp[y][x];

    if (y < n)
        return dp[y][x] = max(rombo[y][x] + solve (y+1, x), rombo[y][x] + solve (y+1, x+1));
    else 
        return dp[y][x] = max(rombo[y][x] + solve (y+1, x), rombo[y][x] + solve (y+1, x-1));
}

int main (){

    int t, aux;
    cin >> t;

    for ( int i = 1; i <= t; i++)
    {
        memset(dp, -1, sizeof dp);

        cin >> n;

        for (int j=1; j<n*2; j++)
        {
            rombo[j].clear();
        
            if (j<=n)
            {
                for (int m = 1; m<=j; m++ ){
                    cin >> aux;
                    rombo[j].push_back(aux);
                }
            }
            else
            {
                for (int m = 1; m<=n*2 -j; m++ ){
                    cin >> aux;
                    rombo[j].push_back(aux);
                }
            }
        }
        cout << "Case " << i << ": " << solve(1,0) << endl;
    }
}