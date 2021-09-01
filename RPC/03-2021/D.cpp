#include <bits/stdc++.h>

using namespace std; 

int main () {

    int n, a, b = 0; 

    cin >> n; 

    while(n--) {
        cin >> a; 
        b += a; 
    }

    if (b%3 == 0) {
        cout << "yes";
    } else {
        cout << "no";
    }
    cout << endl;
}