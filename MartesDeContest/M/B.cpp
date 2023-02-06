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

    cin >> n; 

    string s; 

    cin >> s; 

    int y, x = y = 0; 
    int mirando = 0; 

    int movx[4] = {1, 0, -1, 0};
    int movy[4] = {0, -1, 0, 1};

    for(int i=0; i<s.size(); i++){
        if(s[i] == 'S'){
            x += movx[mirando];
            y += movy[mirando];
        }

        if(s[i] == 'R'){
            mirando = (mirando + 1)%4;
        }
    }

    cout << x << " " << y << endl; 
}