#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[400005];
    long long stairs[400005];
    long long sumh[400005];

    sumh[0] = 0;  
    stairs[0] = -1;  
    cin >> n >> m;  

    for(int i=0; i<n; i++) {
        cin >> a[i];
        sumh[i+1] = sumh[i] + a[i];
        if( stairs[i] < a[i]) {
            stairs[i+1] = a[i];
        } else {
            stairs[i+1] = stairs[i];
        }

        // cout << stairs[i+1] << " ";

    }


    for(int i=0; i<m; i++) {
        int q; 
        cin >> q;
        int pos = upper_bound(stairs, stairs+n+1, q) - stairs -1; 
        // cout << pos -1 << endl; 
        cout << sumh[pos] << " "; 
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