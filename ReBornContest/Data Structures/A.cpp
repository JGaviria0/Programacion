/*  
https://codeforces.com/problemset/problem/1598/C
Metodo: Maps
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

void solve() {

    long long n, a[1000006]; 
    map<int, int> m; 

    cin >> n; 

    long long totalsum = 0; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
        m[a[i]]++; 
        totalsum += a[i];
    }


    if((2*totalsum)%n != 0){
        cout << 0 << endl; 
        return; 
    }
    long long ans = 0; 
    for(int i=0; i<n; i++){
        long long newsum = ((2*totalsum)/n) - a[i]; 
        ans += m[newsum];
        if(a[i] == newsum) ans--; 
    }

    cout << ans/2 << endl; 
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