#include <bits/stdc++.h>

using namespace std; 

bool operatorto (int a, int b) {
    return a > b; 
}

void solve() {

    int n, m, a[1000006], q;
    int prefixsum[1000006];

    cin >> n >> m; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a, a+n, operatorto);
    prefixsum[0] = 0;
    for(int i=0; i<n; i++) {
        prefixsum[i+1] = prefixsum[i] + a[i];
        // cout << prefixsum[i+1] << " " ;
    }

    // cout << endl; 


    for(int i=0; i<m; i++) {
        cin >> q; 

        int pos = lower_bound(prefixsum+1, prefixsum+n+1, q) - prefixsum; 

        cout << ((pos == n+1 ) ? -1: pos)<< endl; 
    }
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