#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i=1; i<n; i++) {
        if(a[i] <= a[i-1]) {
            cout << "NO" << endl; 
            return ; 
        }
    }

    cout << "YES" << endl; 
    return; 
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