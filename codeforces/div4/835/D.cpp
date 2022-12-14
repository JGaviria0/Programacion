#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 


    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }

    a[0] = a[n]= 1e9+10; 
    n++; 

    int i = 1, j = 1; 
    int num = 0; 
    bool bajando = true; 

    while(i < n){
        if(bajando){
            if(a[i] > a[i-1]){
                bajando = false; 
                j = i-1; 
            }
        }

        if(!bajando && a[i] < a[i-1]){
            cout << "NO"  << endl; 
            return; 
        }
        i++; 
    }  

    cout << "YES" << endl; 

    

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