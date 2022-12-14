#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];
    
    int tomados[1000006];

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
        tomados[i] = 0;
    }


    int t = 0; 
    
    for(int i=31; i>= 0; i--){
        int maxlocal = t; 
        int posmaxlocal = -1; 
        if(( t >> i) & 1 ){
            continue;
        }
        for(int j=0; j<n; j++){
            if(( a[j] >> i) & 1 ){
                if(((a[j] | t) > (maxlocal | t))){
                    maxlocal = a[j];
                    posmaxlocal = j; 
                }
            }
        }
        // cout << endl; 
        if((maxlocal | t) > t) {
            t = maxlocal | t; 
            tomados[posmaxlocal] = 1; 
            cout << maxlocal << " ";
        }
    }

    for(int i=0; i<n; i++){
        if(tomados[i] != 1){
            cout << a[i] << " ";
        }
    }
    cout << endl; 
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