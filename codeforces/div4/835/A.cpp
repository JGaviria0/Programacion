#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int a[100];

    cin >> a[0] >> a[1] >> a[2];

    sort(a, a+3); 

    cout << a[1] << endl; 
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