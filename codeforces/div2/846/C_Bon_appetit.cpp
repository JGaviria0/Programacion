/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, m, aux;
    map<int, int> fre;  
    priority_queue<int> pq;
    vector<int> a; 

    cin >> n >> m; 

    for(int i=0; i<n; i++) {
        cin >> aux;
        fre[aux]++; 
    }

    for(int i=0; i<m; i++) {
        cin >> aux; 
        a.push_back(aux);
    }

    sort(a.rbegin(), a.rend());

    for(auto i: fre){
        // cout << i.first << " -> " << i.second << endl; 
        pq.push(i.second);
    }
    int cont = 0; 
    for(int i=0; i<m && !pq.empty(); i++){  //4 2
        int top = pq.top(); // 4
        int diffe = top - a[i] ; // 0
        // cout << a[i] << " " << top << endl; 
        cont += min(top, a[i]); 
        pq.pop();
        if(diffe > 0){
            pq.push(diffe);
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