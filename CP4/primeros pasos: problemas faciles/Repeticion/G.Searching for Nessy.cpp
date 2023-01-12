#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 
    int t; 

    cin >> t; 

    while(t--) {
        cin >> n >> m;
        cout << (n/3) * (m/3) << endl; 
    }
}