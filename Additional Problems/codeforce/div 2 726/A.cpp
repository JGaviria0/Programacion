#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[2000006], t, aux; 
    cin >> t; 

    while (t--) {
        cin >> n;
        int cont = 0; 
        for(int i=0; i<n; i++){
            cin >> aux; 
            cont += aux; 
        }

        if (cont < n) {
            cout << 1 << endl;
        } else {
            cout << abs(cont - n) << endl;
        }
    }
    return 0; 
}
