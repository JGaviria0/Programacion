/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int total = 0;
map<string, int> mapa;
set<string> types;
void solve() {
    int answ = 0;
    for(auto x: types){
        answ += max({mapa[x+"right"],mapa[x+"left"],min(1,mapa[x+"any"])});
    }
    if(answ == total) cout<<"impossible\n";
    else cout<<answ+1<<"\n";
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m;
    string type , foot;

    cin >> n; 

    while(n--) {
        cin>>type>>foot>>m;
        mapa[type+foot] = m;types.insert(type);total+=m;
    }
    solve();
}