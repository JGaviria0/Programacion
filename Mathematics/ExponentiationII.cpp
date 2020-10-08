/*  
https://cses.fi/problemset/task/1712
Metodo: Math
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int MOD = 1e9 + 7;

long long exponentiation(int a, int b, int M) {
    if(b == 0) return 1; 

    if(b%2 == 0) {
        long long aux = exponentiation(a,b/2,M);
        return (aux*aux)%M; 
    } else {
        return (a*exponentiation(a,b-1,M))%M;
    }
}

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int a, b,n, c; 

    cin >> n;

    while(n--) {
        cin >> a >> b >>c; 

        long long y =  exponentiation(b,c, MOD-1);
        cout << exponentiation(a,y,MOD) << endl;
    }
}