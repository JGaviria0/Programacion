#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];
    int q; 

    cin >> n;
    cin >> q; 


    long long total = 0, odds = 0, evens = 0; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
        total += a[i]; 
        if(a[i]%2) {
            odds++; 
        } else {
            evens++; 
        }

    }

    // cout << total << " " << odds << " " << evens << endl; 

    int to, plus; 
    while(q--){
        cin >> to >> plus; 


        total += to ? odds*plus : evens*plus; 

        cout << total << endl; 
        if(to && plus%2 != 0){
            evens += odds;
            odds = 0;
            continue;
        }

        if(!to && plus%2 != 0){
            odds += evens;
            evens = 0;
        }
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}