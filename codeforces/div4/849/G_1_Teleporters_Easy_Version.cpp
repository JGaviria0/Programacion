/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA], aux, k; 

    cin >> n >> k; 

    for(int i=0; i<n; i++) {
        cin >> aux;
        a[i] = aux + i + 1;
    }

    sort(a, a+n);
    int cont = 0; 
    for(int i=0; i<n; i++) {
        if(k - a[i] >= 0){
            cont++; 
            k -= a[i];
        }
    }

    cout << cont << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}