#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int a, b, c; 

    cin >> a >> b >> c; 

    if (a + b == c) {
        cout << "YES" << endl; 
        return; 
    }

    if (a + c == b) {
        cout << "YES" << endl; 
        return; 
    }

    if (c + b == a) {
        cout << "YES" << endl; 
        return; 
    }

    cout << "NO" << endl; 
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