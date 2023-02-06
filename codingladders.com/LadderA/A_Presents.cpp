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

    vector<pair<int, int>> v; 

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> m; 
        v.push_back({m, i+1});
    }

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++) {
        cout << v[i].second << " ";
    }
    cout << endl; 


}