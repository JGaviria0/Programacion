/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 
    string s; 
    set<string> se; 

    cin >> n; 

    while(n--) {
        cin >> s;
        if(se.count(s) > 0){
            cout << "YES" << endl; 
            continue;
        }
        cout << "NO" << endl; 
        se.insert(s);
    }
}