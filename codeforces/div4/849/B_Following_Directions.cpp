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
    string s; 
    cin >> s; 

    int movex[4] = {1, 0, -1, 0};
    int movey[4] = {0, -1, 0, 1};
    int x, y; 
    x = y = 0;

    for(int i=0; i<n; i++){
        if(s[i] == 'R'){
            x+= movex[0];
            y+= movey[0];
        }

        if(s[i] == 'D'){
            x+= movex[1];
            y+= movey[1];
        }
        if(s[i] == 'L'){
            x+= movex[2];
            y+= movey[2];
        }
        if(s[i] == 'U'){
            x+= movex[3];
            y+= movey[3];
        }

        if(x == 1 && y == 1){
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