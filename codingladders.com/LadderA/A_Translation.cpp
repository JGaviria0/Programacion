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
    
    string a, b; 

    cin >> a >> b;
    reverse(b.begin(), b.end()); 

    // cout << b << endl; 

    if (a == b){
        cout << "YES" << endl; 
    } else {
        cout << "NO" << endl;
    }
}