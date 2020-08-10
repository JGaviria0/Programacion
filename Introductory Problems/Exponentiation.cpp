/*  
https://cses.fi/problemset/task/1095
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int MOD = 1e9 + 7;
long long aux;

long long solve(long long a, long long b){

    if (b == 0) return 1; 

    if (b%2 == 0)
    {
        aux = solve(a, b/2);
        return aux*aux%MOD;
    }
    else 
        return a*solve(a, b-1)%MOD; 
}

int main (){

    long long a, b;

    cin >> a >>b; 

    cout << solve (a,b) << endl; 
    
}