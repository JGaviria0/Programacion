/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {
    string pi = "314159265358979323846264338327", n;  

    cin >> n; 
    int cont = 0; 
    for(int i=0; i<n.size(); i++) {
        if(pi[i] != n[i]){
            cout << cont << endl; 
            return; 
        }
        cont++; 
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