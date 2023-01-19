/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int a, b, c, d ; 

    cin >> a >> b >> c >> d; 
    int i = 0;
    while(i < 4){
        i++;

        if(a < b && a < c && b < d && c < d){
            cout << "YES" << endl; 
            return; 
        }

        // cout << a << " " << b << endl; 
        // cout << c << " " << d << endl; 

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