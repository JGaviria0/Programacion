/*  
https://cses.fi/problemset/result/880684/
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int MOD = 1e9 + 7; 

long long expo (int a, int b){

    if(b == 0) return 1;

    if(b%2 != 0)
        return a * expo(a, b-1)%MOD;
    else {
        long long aux = expo(a, b/2); 
        return aux*aux%MOD;
    } 
}

int main(){

    ios::sync_with_stdio(0); cin.tie(0);

    int n, a, b; 

    cin >> n; 

    cout << expo(2, n) << endl;
}