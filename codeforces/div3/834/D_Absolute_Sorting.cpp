/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA]; 

    cin >> n; 
    int mini = oo; 
    int maxi = -1; 
    for(int i=0; i<n; i++) {
        cin >> a[i];
        mini = min(mini, a[i]);
        maxi = max(maxi, a[i]);
    }

    bool down = a[0] > a[1] ? true: false; // false
    bool up = a[0] < a[1] ? true: false; // true; 
    int changes = 0; // 0
    int printm1 = -1; 
    int mid = ((a[0] + a[1])%2 == 0 ? (a[0] + a[1]) /2: -oo);
    // cout << mid << " ";
    for(int i=0; i<n-1; i++) {
        if((a[i] + a[i+1]) /2 != mid && a[i] != a[i+1]){
            // cout << "c ";
            changes++;
        }

        if(a[i] < a[i+1]){ 
            if(down){
                printm1 = i;
            }
        }

        if(a[i] > a[i+1]){
            if(up){
                printm1 = i;
            }
        }
    }


    if(changes == 0){
        cout << mid << endl; 
        return; 
    }
    if(mini == a[n-1]){
        cout << maxi << endl; 
        return; 
    }
    if(printm1 != -1){
        cout << -1 << endl; 
        return; 
    }


    cout << a[0] << endl; 


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