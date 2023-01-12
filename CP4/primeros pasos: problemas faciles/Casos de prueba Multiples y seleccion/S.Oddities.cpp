#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        cin >> m; 
        cout << m << (m%2 == 0? " is even": " is odd") << endl; 
    }
}