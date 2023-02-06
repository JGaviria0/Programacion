/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 104;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA][MAXDATA]; 
    map <int, int> m; 
    cin >> n; 
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++){
            cin >> a[i][j];
            if(j == 0){
                m[a[i][j]]++;
            }
        }
    }
    int maxi = -1, value;
    for(auto k: m){
        if(k.second > maxi){
            maxi = k.second;
            value = k.first;
        }
    }   

    cout << value << " ";

    for(int i=0; i<n; i++) {
        if(a[i][0] != value){
            for(int j=0; j<n-1; j++){
                cout << a[i][j] << " ";
            }
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