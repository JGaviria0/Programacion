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

    cin >> n; 
    map<int, string> s; 
    string aux; 
    for(int i=0; i<n; i++){
        cin >> aux;
        s[i] = aux;
    }
    int a, b;   
    for(int i=0; i<n-1; i++){
        cin >> a >> b; 
        a--, b--; 
        s[a] += s[b];
        // s.erase(b);
    }

    cout << s[a] << endl;
}