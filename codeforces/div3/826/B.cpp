#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    if(n == 3) {
        cout << -1 << endl;
        return;  
    }

    cout << n << " " << n-1 << " "; 

    if (n < 3) {
        cout << endl; 
        return; 
    }

    cout << 1 << " "; 

    if (n < 4) {
        cout << endl;
        return; 
    }

    cout << 2 << " "; 

    for(int i=3; i<n-1; i++) {
        cout << i << " ";
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