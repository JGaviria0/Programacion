/*  
https://cses.fi/problemset/task/1745
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int dp[1000];

int main () {

    int n, coin[104];

    cin >> n; 

    for(int i= 0; i<n; i++)
        cin >> coin[i];
    
    
    for(int i = 0; i<n; i++)
        for(int j=i; j<n; j++)
}