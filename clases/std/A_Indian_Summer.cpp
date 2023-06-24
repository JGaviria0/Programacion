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

    set<pair<string, string>> s; 
    
    int n;
    string aux, aux2; 

    cin >> n; 

    while(n--) {
        cin >> aux >> aux2; 
        s.insert({aux, aux2});
    }

    cout << s.size() << endl; 
}