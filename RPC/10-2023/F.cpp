/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; 

    cin >> n >> m; 
    int next = 0; 
    for(int i=0; i<n; i++){
        // cout << next << "->"; 
        int aux; 
        
        cin >> aux; 

        aux = m - next - aux; 
        // cout << aux << endl; 

        if(aux < 0) {
            cout << "impossible" << endl; 
            return 0; 
        }

        if (i == n-1) {
            if(next%2 == 0){
                cout << "possible" << endl;
                return 0; 
            } else {
                cout << "impossible" << endl;
                return 0; 
            }
        }   else {
            next = aux%2 == 0? 0 : 1; 
        }
    }
}