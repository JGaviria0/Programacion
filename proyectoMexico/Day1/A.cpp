/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA] = {13, 23, 31, 41, 53, 61, 71, 83, 97}; 

    string s; 

    cin >> s; 

    int value = s[0] - '0'; 


    cout << a[value -1 ] << endl;


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