/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, m, a[MAXDATA], aux; 

    map<int, int> mp; 
    int cont = 0; 
    int change = 0;
    int val = 0;  
    cin >> n >> m;

    int auxn = n; 

    stack<int> q; 

    for(int i=0; i<m; i++) {
        cin >> a[i];
    }

    for(int i=0; i<m; i++) {

        if (mp[a[i]] == 0){
            mp[a[i]] = 1;
            q.push(cont+1);
            change++; 
        } 
        if(change == n){
            break; 
        }
        cont++; 
    }

    for(int i=0; i<(auxn-change); i++){
        cout << -1 << " "; 
    }

    while(!q.empty()){
        cout << q.top() << " ";
        q.pop();
    }

    cout << endl; 
    


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