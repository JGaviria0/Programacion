/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    string s; 

    cin >> s; 

    int cont = 0; 

    bool inorder = true; 

    for(int i=0; i<s.size(); i++){
        if(s[i] == '1'){
            inorder = true; 
            break; 
        }

        if(s[i] == '0'){
            if(cont < 2) {
                cout << "NO" << endl; 
                return; 
            }
            inorder = false; 
            break; 
        }

        cont++; 
    }

    bool canbeany = false; 

    int maxorder = 0; 
    int minorder = 0; 
    
    for(int i=cont+1; i<s.size(); i++){
        if(s[i] == '+'){
            cont++; 
        }
        if(s[i] == '-'){
            cont--; 
            maxorder = min(maxorder, cont); 
            if(cont < minorder) {
                minorder = 0; 
            }
        }

        if(s[i] == '1'){
            maxorder = max(cont, maxorder); 
        }

        if(s[i] == '0') {
            if(cont <= 1){
                cout << "NO" << endl; 
                return; 
            }

            if(minorder == 0 || minorder > cont){
                minorder = cont; 
            }
        }

        if( minorder != 0 && minorder <= maxorder){
            cout << "NO" << endl; 
            return; 
        }
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