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

    cin >> n >> m; 

    map<string, string> dic; 
    string a, b; 

    for(int i=0; i<n; i++){
        cin >> a >> b;
        dic[b] = a; 
    }

    for(int i=0; i<m; i++){
        cin >> a >> b;
        dic[b] = a; 
        cout << a << " " << b << " #" << dic[b.substr(0,b.size()-1)] << endl; 
    }
}