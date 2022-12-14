#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n , a[1000006]; 

    string s; 

    cin >> n; 

    for(int i=0; i<n; i++ ) {
        cin >> a[i];
    }

    int aux; 
    string subs; 

    for(int i=0; i<n; i++) {
        cin >> aux; 
        cin >> subs; 
        int ds=0, us = 0;
        for(int j=0; j<aux; j++) {
            if(subs[j] == 'D') {
                a[i]++; 
            } 

            if(subs[j] == 'U') {
                a[i]-- ;
            } 

            if(a[i] > 9) {
                a[i] = 0;
            }

            if(a[i] < 0) {
                a[i] = 9;
            }
        }

        cout << a[i] << " "; 
    }

    cout << endl; 

}

int main() {

    int t, n; 

    cin >> t; 

    while(t--) {
        solve();
    }
}