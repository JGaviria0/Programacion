/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n; 

    cin >> n;
    if(n%2 != 0) {
        cout << -1 << endl;
        return;  
    }
    int a = n/2;
    int b = n*2 - a; 

    if((a^b) == n && a+b == 2*n){
        cout << a << " " << b << endl; 
    } else {
        cout << -1 << endl; 
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m;

    cin >> n; 
    while(n--)
        solve();
}