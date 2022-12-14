#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];
    string s; 

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    cin >> s; 

    map<int, char> dic; 

    // cout << (('a' - dic[1]) == 97 ? "YES" : "NO") << endl; 

    for(int i=0; i<n; i++){
        // cout << dic[a[i]] << " " << s[i] << " " << a[i] << endl; 
        if(('a' - dic[a[i]]) == 97 ) {
            dic[a[i]] = s[i];
            continue;
        }

        if(dic[a[i]] != s[i]) {
            cout << "NO" << endl; 
            return; 
        }
    }

    cout << "YES" << endl; 

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