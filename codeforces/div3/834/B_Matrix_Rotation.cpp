/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int a, b, c , d; 

    cin >> a >> b >> c >> d; 
    for(int i=0; i<4; i++){
        if(a < b && c < d && a < c && b < d){
            cout << "YES" << endl; 
            return; 
        }

        int aux = a; 
        a = b; 
        b = d; 
        d = c; 
        c = aux; 
    }
    cout << "NO" << endl; 
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