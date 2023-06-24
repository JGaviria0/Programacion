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
    
    long long n, m; 

    cin >> n; 

    string s; 

    cin >> s; 

    long long coffe = 0; 
    long long sleep = 0; 
    for(int i=0; i<n; i++){
        // cout << coffe << endl; 
        if(s[i] == '1'){
            coffe = 3; 
        } else{
            if(coffe == 0){
                sleep++; 
            }
        }
        coffe--; 
        coffe = coffe < 0 ? 0: coffe; 
    }

    cout << n - sleep << endl;
}