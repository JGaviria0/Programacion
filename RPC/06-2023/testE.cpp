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

    vector <pair<long double,long double>> v; 
    long double a = 100.0; 
    long double dos = 2.0; 
    v.push_back({a, 0.0});
    v.push_back({0.0, a}); 


    for(int i=2; i<100; i++){
        v[i] = {((v[i-1].first/dos) +( v[i-2].first/dos)), ((v[i-1].second/dos) +( v[i-2].second/dos))};
        // cout << fixed << setprecision(7) << i << ": " <<v[i].first << " " << v[i].second << endl; 
    }

    long long n; 

    cin >> n;


    if (n < 100) {
        cout << fixed << setprecision(7)<<v[n-1].first << " " << v[n-1].second << endl; 
    } else {
        cout << fixed << setprecision(7)<< v[99].first << " " << v[99].second << endl; 
    }
    
}