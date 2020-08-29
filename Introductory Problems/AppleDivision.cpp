/*  
https://cses.fi/problemset/task/1623
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

long long n, a[40], all = 0;

long long solve (int i, long long sum) {
    
    if (i >= n) return abs((all - sum) - sum); 

    return min(solve(i+1, sum + a[i]), solve(i+1, sum));
}

int main () {

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i]; 
        all += a[i]; 
    }

    cout << solve(0, 0) << endl;
}