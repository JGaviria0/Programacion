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
    
    int n, k, l, c, d, p, nl, np;



    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int li = k*l; 
    int lim = c*d; 

    int totalLim = li/nl; 
    int totalsal = p/np;

    cout << min({lim, totalLim, totalsal})/n << endl; 

}