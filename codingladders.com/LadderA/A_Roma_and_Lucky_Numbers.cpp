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
    
    int n, k, a[MAXDATA]; 

    cin >> n >> k; 

    string s; 

    int ans = 0; 

    for(int i=0; i<n; i++){
        cin >> s; 
        int cont = 0; 
        for(int j=0; j<s.size(); j++){
            if(s[j] == '4' || s[j] == '7'){
                cont++; 
            }
        }
        // cout << cont << endl; 
        ans += (cont > k ? 0: 1); 
    }

    cout << ans << endl;
}