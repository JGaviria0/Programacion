/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9;
const double PI = 3.14159265359; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    long long n, m; 

    double r; 

    cin >> n; 
    double r2 = n/PI; 
    r = sqrt(r2);

    double res = 2*PI*sqrt(r2);

    cout << res << fixed << setprecision(6)<< endl; 


}