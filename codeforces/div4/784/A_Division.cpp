#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    if (n <= 1399) {
        cout << "Division 4" << endl; 
        return; 
    }

    if (n <= 1599) {
        cout << "Division 3" << endl; 
        return; 
    }

    if (n <= 1899) {
        cout << "Division 2" << endl; 
        return; 
    }

    cout << "Division 1" << endl; 

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