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
    
    int n, m, a[MAXDATA]; 

    cin >> n >> m; 

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }
    sort(a, a+n); 
    int ans = 0; 
    for(int i=0;i<m; i++){
        ans += (a[i] <= 0 ? a[i]: 0);
    }

    cout  << -ans << endl; 
}