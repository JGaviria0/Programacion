#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, a, b; 

    map <int , int > maxi ; 
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> a >> b; 
        maxi[b] = max(maxi[b], a);
    }

    int sum = 0; 
    for(int i=1; i<=10; i++) {
        if(maxi[i] == 0) {
            cout << "MOREPROBLEMS" << endl; 
            return; 
        }

        sum += maxi[i]; 
    }

    cout << sum << endl; 

}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t; 

    cin >> t; 

    while(t--) {
        solve();
    }
}