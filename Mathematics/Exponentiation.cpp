/*  
https://cses.fi/problemset/task/1095
Metodo: Math
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int MOD = 1e9 + 7;

long long exponentiation(int a, int b) {
    if(b == 0) return 1; 

    if(b%2 == 0) {
        long long aux = exponentiation(a,b/2);
        return (aux*aux)%MOD; 
    } else {
        return (a*exponentiation(a,b-1))%MOD;
    }
}

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int a, b,n; 

    cin >> n;

    while(n--) {
        cin >> a >> b; 
        cout << exponentiation(a,b) << endl;
    }
}