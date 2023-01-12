#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n >> m; 

    if(n == 0 && m == 0) {
        cout << "Not a moose" << endl; 
        return 0; 
    }

    cout << (n == m ? "Even ": "Odd ") << max(n,m)*2 << endl; 
}