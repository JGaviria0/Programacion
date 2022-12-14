#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];
    int aux; 
    int bills[] = {1, 5, 10, 20, 50, 100};
    
    for(int i=0; i<6; i++) {
        cin >> aux; 
        a[i] = aux*bills[i];
    }

    pair<int, int> maxi; 
    for(int i=0; i<6; i++) {
        if (maxi.first <= a[i]) {
            maxi = { a[i], i};
        }
    }

    cout << bills[maxi.second] << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    
    solve();
    
}