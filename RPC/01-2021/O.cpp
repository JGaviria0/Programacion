#include <bits/stdc++.h>

using namespace std; 

int main () {

    int p, e, t; 

    cin >> t; 

    while(t--) {
        cin >> p; 
        cin >> e; 

        if (p-e >= 10) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
}