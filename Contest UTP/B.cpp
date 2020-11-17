#include<bits/stdc++.h>

using namespace std;

int main () {
    int n; 

    while(cin >> n && n!=0) {
        int ans = ceil(sqrt(n)); 
        cout << ans << endl;
    }
}