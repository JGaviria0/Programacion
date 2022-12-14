#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    string s; 

    cin >> s; 

    int maxi = -1; 

    for(int i=0; i<n; i++){
        maxi = max(maxi, s[i] - 'a');
    }

    cout << maxi + 1 << endl; 
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