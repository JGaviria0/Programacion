/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    string s; 

    cin >> s;
    if(s.size() > 10){
        cout << s[0] << s.size()-2 << s[s.size()-1] << endl; 

    }else {
        cout << s << endl; 
    }
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