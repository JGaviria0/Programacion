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
    string to= "codeforces"; 

    cin >> s; 

    for(int i=0; i<to.size(); i++){
        if(s[0] == to[i]){
            cout << "YES" << endl; 
            return; 
        }
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