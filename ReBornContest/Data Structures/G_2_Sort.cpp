/*  
https://codeforces.com/problemset/problem/1692/G
Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 2e5 + 10; 

void solve() {

    int n, a[MAXDATA], k, aminb[MAXDATA], prefix[MAXDATA];
    cin>> n >> k;  

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    prefix[0] = 0; 

    for(int i=0; i<n-1; i++) {
        aminb[i] = a[i] < 2*a[i+1]? 1: 0 ;
        prefix[i+1] = prefix[i] + aminb[i];
        // cout << aminb[i] << " ";
    }

    // cout << endl; 

    int cont = 0;
    for(int i=0; i<n-k; i++) {
       if(prefix[i+k] - prefix[i] == k){
            cont++; 
       }
    }

    cout << cont << endl; 

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