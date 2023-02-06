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
    
    int n, m, a[4]; 
    a[0] = a[1] = a[2] = 0;
    cin >> n; 
    int aux; 
    for(int i=1; i<=n; i++){
        cin >> aux;
        a[i%3] += aux; 
    }
    int maxi = max({a[0], a[1], a[2]});
    if(a[1] == maxi){
        cout << "chest" << endl; 
    }

    if(a[2] == maxi){
        cout << "biceps" << endl; 
    }

    if(a[0] == maxi){
        cout << "back" << endl; 
    }
}