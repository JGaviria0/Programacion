/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA]; 

    cin >> n; 
    string s; 
    cin.ignore();
    getline(cin, s);

    if(s == ""){
        cout << 0 << endl; 
        return; 
    }

    int i = 0; 

    while( i < n && !s.empty() && ((s[i] == '0' && s[n-1] == '1') || (s[i] == '1' && s[n-1] == '0'))){
        ++i; 
        --n; 
    }

    cout << n - i << endl; 
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