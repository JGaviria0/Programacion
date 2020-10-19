/*  
https://cses.fi/problemset/task/1713
Metodo: Math
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

const int maxt = 1e6; 
long long n, x, divisors[maxt+5];
int main () {

    ios::sync_with_stdio(0); cin.tie(0);

    for(int i=2; i<=maxt; i++) {
        for(int j=i; j<=maxt; j+=i) {
            divisors[j]++;
        } 
    }

    cin >> n; 

    while (n--) {
        cin >> x; 

        cout << divisors[x]+1 << endl; 
    }
    
}