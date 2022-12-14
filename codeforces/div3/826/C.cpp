#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n;
    long long a[1000006];

    cin >> n;   
    int aux = 0; 
    a[0] = 0;
    for(int i=1; i<=n; i++) {
        cin >> aux; 
        a[i] = aux + a[i-1];
    }

    int nextpos = 2;
    int possum = -1; 
    bool flag = false; 
    for(int i=1; i<n; i++) {
        if (flag) break;
        possum = i; 
        cout << "interacion " << i << endl; 

        int actualvalue = a[i];
        int actualpos = i; 
        int r = i + 1; 
        cout << actualvalue << " " << actualpos << " " << r << endl; 
        cout << "Search: " << endl; 
        while( r < n ) {
            if( a[r] - a[actualpos] > actualvalue) {
                break; 
            }

            if( a[r] - a[actualpos] == actualvalue) {
                possum = max(possum, r- actualpos);
                cout << r << " " << actualpos  << " " << possum <<  " " << a[r] - a[actualpos] <<endl; 
                actualpos = r;  
                
                if (r == n) {
                    flag = true; 
                }
            }
            r++;
            
        } 
    }
    cout << possum << endl; 
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