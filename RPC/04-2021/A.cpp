#include <bits/stdc++.h>

using namespace std; 
 
void solve() {

    int n, m, a[1000006];

    cin >> n; 

    a[0] = -1;

    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }

    sort(a, a+n+1);

    long long sum = 0; 

    for(int i=1; i<=n; i++) {
        // cout << a[i] << " " << a[i-1] << endl; 
        if(a[i] != a[i-1] + 1) {
            sum += a[i];
        }
    }

    cout << sum << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    
    solve();
    
}