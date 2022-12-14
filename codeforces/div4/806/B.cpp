#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n , a[1000006]; 

    map<char, int> m; 
    string s; 
    int sum = 0; 

    cin >> n; 
    cin >> s; 

    for(int i=0; i<n; i++) {
        if(m[ s[i] ] == 0 ) {
            sum += 2; 
            m[s[i]]++; 
            continue;
        }

        sum++;  
    }

    cout << sum << endl; 


}

int main() {

    int t, n; 

    cin >> t; 

    while(t--) {
        solve();
    }
}