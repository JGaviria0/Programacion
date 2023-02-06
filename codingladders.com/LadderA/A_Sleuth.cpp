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

    char vo[13] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'} ;
    string n; 

    getline(cin, n, '\n');

    for(int i=n.size()-1; i>=0; i--){
            // cout << n[i] << endl ;
        if(n[i] != '?' && n[i] != ' '){
            // cout << "up" << endl ;
            for(int j=0; j<12; j++){
                if(n[i] == vo[j]){
                    cout << "YES" << endl; 
                    return 0; 
                }
            }
            break;
        }
    }

    cout << "NO" << endl; 

}