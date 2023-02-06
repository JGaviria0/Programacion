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
    
    string n, m; 

    cin >> n >> m;

    for(auto &i: n) i = toupper(i);
    for(auto &i: m) i = toupper(i);

    // cout << n << m;

    if(n == m){
        cout << 0; 
    } else if( n> m){
        cout << 1; 
    } else{
        cout << -1;
    }

    cout << endl; 
}