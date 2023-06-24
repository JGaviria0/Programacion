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
    
    long double n, m, a[200006]; 

    cin >> n >> m; 
    long double sum = 0;

    for(int i=0; i<n; i++){
        cin >> a[i]; 
        sum += a[i]*a[i]; 
    } 

    long double k = (sum/n);
    long double z = sqrt(k/m);


    for(int i=0; i<n; i++){

        cout << fixed << setprecision(10) << a[i]/z << " "; 
    }
    cout << endl; 


}