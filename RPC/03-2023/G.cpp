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

    cin >> n; 
    cin >> s; 
    m = sqrt(n); // 3
    int ans = 0; 
    for(int i=3; i<=m; i++){
        int blue = 0, red = 0;
        // int blocks = 2*i + 2*(i-2) + ((i-1)*(i-1)); 
        int border = 2*i + 2*(i-2); 
        int inside = ((i-2)*(i-2));

        int blocks = i*i-1; 
        for(int j=0; j<=blocks; j++){
            if(s[j] == 'X') blue++; 
            if(s[j] == 'O') red++; 
        }

        // cout << blue << " " << red << endl; 

        int init = 0; 
        int end = blocks; 

        while(blocks <= n){
            // cout << blocks << " " << ans << endl;
            if(blue == border && red == inside){
                ans++; 
            }

            if(red == border && blue == inside){
                ans++; 
            }

            if(s[init] == 'X') blue--; 
            if(s[init] == 'O') red--; 
            init++; 
            blocks++; 
            if(s[blocks] == 'X') blue++; 
            if(s[blocks] == 'O') red++; 
        }

    }
    cout << ans << endl; 
}