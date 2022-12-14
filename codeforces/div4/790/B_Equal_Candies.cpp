#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    int mini = 1e9; 
    for(int i=0; i<n; i++) {
        cin >> a[i];
        mini = min(mini, a[i]);
    }
    long long sum = 0; 

    for(int i=0; i<n; i++) {
        sum += a[i] - mini; 
    }

    cout << sum << endl;


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