#include <bits/stdc++.h>

using namespace std; 

int main () {
    int a, b, c; 

    cin >> a >> b >> c; 

    int ans = a + (b*c);
    int res = a*b; 

    if(res == ans) {
        cout << 0; 
    } else if (res < ans) {
        cout << 1; 
    } else {
        cout << 2; 
    }
    cout << endl; 
}