#include <bits/stdc++.h>

using namespace std; 

void solve() {

    string s ; 

    cin >> s; 

    int first3 = ( s[0] - '0') + ( s[1] - '0') + ( s[2] - '0');
    int last3 =  ( s[3] - '0') + ( s[4] - '0') + ( s[5] - '0');

    if(first3 == last3) {
        cout << "YES" << endl;
        return; 
    }
    

    cout << "NO" << endl; 

    
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