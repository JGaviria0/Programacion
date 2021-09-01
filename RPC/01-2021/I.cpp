#include <bits/stdc++.h>

using namespace std; 

int main () {

    ios::sync_with_stdio(0); cin.tie(0);
    long long a, b, ans; 

    while (true) {
        cin >> a >> b; 
        if (a == 0 && b == 0) {
            break; 
        }
        
        ans = b/2;
        if (ans%2 == 0) {
            cout << a;
        } else {
            cout << a*-1; 
        }

        if (b%2 != 0) {
            cout << "i"; 
        }
        cout << endl;
    }
}