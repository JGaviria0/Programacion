/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int factorial[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int y, m; 

    // for(int k=1; k<101; k++){


    cin >> y; 
    // y=k; 

    if (y == 1){
        cout << 0 << endl; 
        // continue;
        return 0; 
    }

    int maxi = 9; 
    string s = "";
    while(y > 0){
        // cout << y << endl; 
        if(factorial[maxi] > y){
            maxi--; 
            continue;
        } 

        y -= factorial[maxi];
        s += char(maxi + '0');
    }
    string sre = "";
    for(int i=s.size()-1; i>=0; i--){
        sre += s[i] == '1' ? '0' : s[i];
        
    }
    if(sre[0] == '0') sre[0] = '1'; 

    cout << sre << endl; 
    
    // }
}