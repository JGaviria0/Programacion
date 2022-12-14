/*  
https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2661
Metodo: Implementacion simple
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    long long n, t;

    cin >> t; 

    while(t--) {
        
        cin >> n; 

        long long ans = -1 + sqrt(1+8*n); 
        

        cout << ans/2 << endl; 

    } 
}