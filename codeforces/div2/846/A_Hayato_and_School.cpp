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

    pair<vector<int>, vector<int>> pp;

    for(int i=1; i<=n; i++) {
        cin >> a[i];
        if(a[i]%2==0){
            pp.first.push_back(i);
        } else {
            pp.second.push_back(i);
        }
    }

    if(pp.second.size() < 1 || (pp.second.size() < 3 && pp.first.size() < 2)){
        cout << "NO" << endl; 
        return ;
    }

    cout << "YES" << endl;

    if(pp.second.size()>= 3){
        cout << pp.second[0] << " " << pp.second[1] << " " << pp.second[2] << endl; 
        return; 
    }   

    cout << pp.first[0] << " " << pp.first[1] << " " << pp.second[0] << endl; 
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