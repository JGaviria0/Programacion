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

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    bool pair = a[0]%2==0 ? true : false; //false
    a[n] = a[n-1]%2==0 ? 1 : 2;
    int cont = 0;
    int contpar = 1;
    int contimpar = 1;
    for(int i=0; i<n; i++){
        if (pair){
            if(a[i+1]%2 != 0){
                // cout << -1 << endl; 
                pair = false; 
                cont += contpar -1; 
                contimpar = 1;
            } else {
                // cout << 1 << endl; 
                contpar++; 
            }
        } else {
            if(a[i+1]%2 == 0){
                pair = true; 
                // cout << -1 << endl; 
                cont +=  contimpar - 1; // 0 + 2 ;  
                contpar = 1;  
            } else {
                // cout << 1 << endl; 
                contimpar++; 
            }
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