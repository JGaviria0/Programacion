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
    
    string a, b ,c; 
    string a1, b1 ,c1; 

    cin >> a >> b >> c; 
    cin >> a1 >> b1 >> c1; 

    int cont = 0;
    if(a != a1){
        cont++; 
    }

    if(b != b1){
        cont++; 
    }

    if(c != c1){
        cont++; 
    }

    if(cont == 0 || cont == 3){
        cout << "Yes" << endl; 
        return 0; 
    }

    cout << "No" << endl; 
}