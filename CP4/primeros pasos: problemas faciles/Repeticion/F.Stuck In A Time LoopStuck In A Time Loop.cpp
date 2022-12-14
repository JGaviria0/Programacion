/*  
https://open.kattis.com/problems/timeloop
Metodo: Implementacion simple
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n;
    m = n; 

    while(n--) {
        cout << m - n << " Abracadabra" << endl;
    }
}