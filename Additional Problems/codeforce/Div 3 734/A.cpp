#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, c1, c2; 
    int t; 

    cin >> t ;

    while(t--) {
        cin >> n; 

        int ans = n/3; 

        if (n%3 == 2){
            cout << ans  << " " << ans + n%3 - 1<< endl;
        } else {
            cout << ans + n%3 << " " << ans << endl;
        }

    }


    return 0; 
}
