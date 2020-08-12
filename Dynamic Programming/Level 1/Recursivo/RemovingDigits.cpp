/*  
https://cses.fi/problemset/task/1637/
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/       

#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9;
const int limit = 1000006;

int dp[limit], n, aux;

int solve (int x){
    
    if (x<0) return oo;
    if (x == 0) return 0;
    int &ans = dp[x];
    if (ans != -1) return ans;
    ans = oo;
    aux = x;
    int cont = 0, numbers[20];
    while (aux != 0){ 
        numbers[cont] = aux % 10;
        aux /= 10;
        cont++;
    }
    for(int i=0; i<cont; i++)
    {   
        ans = min(solve (x-numbers[i]) + 1, solve(x));
    }
        
    return ans;
}

int main (){

    memset(dp, -1, sizeof dp);

    cin >> n;

    cout << solve (n) << endl;

    //for ( int i=0; i<=n; i++)
    //    cout << dp[i] <<" " << i << endl;
}