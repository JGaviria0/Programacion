#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, a[1000006];
    map <int, int> m; 
    int aux; 

    cin >> n; 


    bool flag = true; 
    for(int i=0; i<n; i++) {
        cin >> aux;
        if(!flag) {
            continue;
        } 
        m[aux]++; 

        if (m[aux] == 3) {
            cout << aux << endl; 
            flag = false; 
        }
    }
    if (flag)
        cout << "-1" << endl; 
    return; 
    
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