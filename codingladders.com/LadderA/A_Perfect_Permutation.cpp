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

    if(n%2 != 0){
        cout << -1 << endl; 
        return 0; 
    } 
    int a = 0; 
    for(int i=1; i<=n; i+=2){
        cout << i+1 << " " << i << " "; 
    }

    cout << endl; 
}