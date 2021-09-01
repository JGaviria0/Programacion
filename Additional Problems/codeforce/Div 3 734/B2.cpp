#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int t, n, k, a[1000006];

    cin >> t; 

    while(t--) {
        cin >> n >> t; 
        map <char, int> soga;

        for(int i=0; i<n; i++) {
            cin >> a[i];
            soga[a[i]]++; 
        }
    }

    return 0; 
}
