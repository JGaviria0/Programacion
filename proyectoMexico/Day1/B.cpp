/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    string a, b; 

    int check[MAXDATA]; 

    cin >> a >> b; 
    memset(check, -1, sizeof(check));
    int i, j; 
    i = 0; 
    j = a.size() - 1; 
    int n = a.size(); 
    for(int i=0; i<n; i++){
        if(a[i] == b[i]){
            check[i] = (a[i] == '1' ? 1 : 0); 
        }
    }

    //  for(int k=0; k<n; k++){
        
    //     cout << check[k] << " "; 
    // }

    // cout << endl; 

    for(int k=1; k<n-1; k++){

        if(check[k] != -1 && check[k+1] != -1 && check[k] == 0 &&  check[k+1] == 1){
                cout << "YES" << endl; 
                return; 
            
        }
       
    }



    for(int k=1; k<n; k++){

         if(check[k] == -1){
            break; 
        }

        if(check[k] == 1){
            cout << "YES" << endl; 
            return; 
        }
       
    }

    for(int k=n-2; k>=0; k--){

         if(check[k] == -1){
            break; 
        }
        
        if(check[k] == 0){
            cout << "YES" << endl; 
            return; 
        }
        
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