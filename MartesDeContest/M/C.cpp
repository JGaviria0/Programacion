/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA]; 

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, t; 

    cin >> n; 

    t = (n*2) + 1; 
    map<int, int> m; 
    for(int i=1; i<=t; i++){
        m[i] = 1; 
    }
    int aux; 
    for(int i=0; i<=n; i++){
        int choose;
        for(auto k: m){
            choose = k.first;
            cout << k.first << endl; 
            break; 
        }
        m.erase(choose);
        cin >> aux; 
        m.erase(aux);
    }
}