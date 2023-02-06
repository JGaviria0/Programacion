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
    string s;  

    cin >> n >> m; 

    cin >> s; 

    for(int i=0; i<m; i++){
        for(int j=0; j<=n; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                char aux = s[j];
                s[j] = s[j+1];
                s[j+1] = aux; 
                j++; 
            }
        }
    }

    cout << s << endl; 
}