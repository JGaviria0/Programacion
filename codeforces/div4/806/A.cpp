#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n,m , a[1000006]; 

    string s; 

    cin >> s; 

    for (auto & c: s) c = toupper(c);

    // cout << s << endl; 
    if(s == "YES") {
        cout << "YES" << endl;
        return;  
    }

    cout << "NO" << endl; 
}

int main() {

    int t, n; 

    cin >> t; 

    while(t--) {
        solve();
    }
}