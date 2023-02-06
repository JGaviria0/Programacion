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

    map <int, int> m;

    int aux; 
    for(int i=0; i<n; i++) {
        cin >> aux;
        m[aux]++; 
    }

    int cont = 0; 

    while(!m.empty()){
        vector<int> v; 
        int actual = -1;
        // cout << "yes" << endl; 
        for(auto &i: m){
            if( actual+1 == i.first){
                actual = i.first; 
            } else {
                actual = i.first;
                cont++; 
            }
            i.second--; 
            if(i.second== 0){
                v.push_back(i.first);
            }
        }

        for(int i=0; i<v.size(); i++){
            m.erase(v[i]);
        }
    }

    cout << cont << endl; 

}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}