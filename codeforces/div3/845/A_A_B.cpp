/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    string s; 
    int n, a, b; 

    cin >> n; 

    while(n--) {
        cin >> s;

        a = s[0] - '0';
        b = s[2] - '0';

        cout << a+b << endl; 
    }
}