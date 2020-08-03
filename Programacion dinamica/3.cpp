/*
http://lightoj.com/volume_showproblem.php?problem=1011
Metodo: DP, mascara de bits.
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

int n, dp[1<<16]; //Creamos el numero
int v[16][16];

int solve (int mask) { 
    int idx = __builtin_popcount(mask);
    if( idx == n ) return 0;
    int &res = dp[mask]; //paso por referencia (asi no tengo que volver a escribir).
    if (res != -1) return res;
    res = 0;
    for ( int i = 0; i<n; i++) {
        if ( ((mask >> i) &1) == 0) { // verificar en la mascara si ya esta machado.
            res = max( res, v[idx][i] + solve(mask|(1<<i)));
        }
    }
    return res; 
}

int main (){

    int t;
    cin >> t;

    for ( int i = 1; i <= t; i++)
    {
        cin >> n;
        memset(dp, -1, sizeof dp);

        for (int j=0; j<n; j++)
        {
            for (int m = 0; m<n; m++ ){
                cin >> v[j][m];
            }
        }
        cout << "Case " << i << ": " << solve(0) << endl;
    }
}