/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>
#include <math.h>  

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
long double PI = 3.1415926535897932384626433832795028841;

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    vector<pair<long double, long double>> v; 

    for(int i=0; i<n; i++){
        int a, b; 
        cin >> a >> b; 
        v.push_back({a, b});
    }

    pair<int, int> start = v[0]; 
    pair<int, int> end = v[n-1]; 

    long double deg = 180/PI;
    long double maxi = -1; 
    for(int i=1; i<n; i++){
        // long double div = ;
        long double value = atan(abs(start.second - v[i].second)/abs(start.first - v[i].first))*deg;
        maxi = max(maxi, value);
    }
    for(int i=0; i<n-1; i++){
        
        long double value = atan(abs(end.second - v[i].second)/abs(end.first - v[i].first))*deg;
        maxi = max(maxi, value);
    }
    cout << fixed << setprecision(10) << maxi << endl;
}