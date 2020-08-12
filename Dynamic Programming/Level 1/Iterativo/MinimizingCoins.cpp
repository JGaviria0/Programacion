/*
https://cses.fi/problemset/task/1634
Metodo: DP (Iterativo)
Jhon Alex Gaviria
*/
 
#include <bits/stdc++.h>
 
using namespace std;
const int oo = 1e9;
const int limit = 1000006;
 
 
int main (){
 
    int x, dp[limit], n, coin[102], res, aux;
    cin >> n >> x;
 
    fill(dp, dp + limit, oo);
 
    for(int i=0; i<n; i++)
        cin >> coin[i];
    
    dp[0] = 0; 
 
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<n; j++)
            if (i + coin[j] <= x)
                dp[i + coin[j]] = min (dp[i + coin[j]], dp[i]+1);
    }
 
    aux = dp[x];
    if ( aux == oo )
        cout << "-1" << endl;
    else
        cout << aux << endl;
}