#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 
    int parpar = 0; 
    int parimpar = 0; 
    int imparpar = 0; 
    int imparimpar = 0; 
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        if(i%2 == 0) {
            if(a[i]%2 == 0) {
                parpar++; 
            } else {
                parimpar++; 
            }
        } else {
           if(a[i]%2 == 0) {
                imparpar++; 
            } else {
                imparimpar++; 
            } 
        }



    }
    // cout << parpar << " "<< parimpar << " " << imparpar << " " << imparimpar << " " << endl; 

    if ((parpar== 0 && ( imparimpar == 0 || imparpar == 0)) || (parimpar== 0 && ( imparimpar == 0 || imparpar == 0)) ) {
        cout << "YES" << endl; 
        return; 
    }

    cout << "NO" << endl; 
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