#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long m; 
    long long ans; 

    cin >> m;

    if(m%2 == 0) {
        ans = m*10 - 1; 
        cout << ans << endl; 
    } else {
        cout << -1 << endl;
    }

    return 0; 
}
