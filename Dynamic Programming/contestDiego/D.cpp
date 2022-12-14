#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n >> m; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(a, a+n); 
    long long sums[n+2];

    for(int i= 0; i<n; i++) {
        sums[i] = 0;  
    }

    long long ans = 0; 

    for(int i= 0; i<n; i++) {
        // cout << i%m << " " << sums[i%m] << " " << a[i] << endl; 
        sums[i%m] += a[i];
        ans += sums[i%m]; 
        cout << ans << " ";  
    }

    cout << endl; 

}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    solve();
    
}