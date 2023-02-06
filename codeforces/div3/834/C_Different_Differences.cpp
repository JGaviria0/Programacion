/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, m; 

    cin >> m >> n;
    int now = 1; // 2
    int last = 1; // 2 

    cout << 1 << " ";
    for(int i=1; i<m; i++){
        // cout << "("<< n - last - now << "," << m - i-1 << ")";
        if(n - last - now >= (m - i-1)){ // 4 - 2 - 2 <= 4 - 1 
            cout << last + now << " "; 
            last += now;
            now++; 
        } else {
            last++;
            cout << last << " "; 
        }
    }

    cout << endl; 
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