/*  
https://cses.fi/problemset/task/1623
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

string w; 
map <string, int> ans; 

void solve ( int i, int n, string k, string h){

    if(n == w.size()) ans[k] = 1; 

    for(int j = 0; j<h.size(); j++) {
        string b = h; 
        char aux = h[j]; 
        h.erase(j, 1); 
        solve(i, n+1, k + aux, h); 
        h = b; 
    }
}

int main () {
    string k; 
    int cont = 0; 
    cin >> w; 
    solve(0, 0, k, w);

    for (auto i : ans)
        cont++;  
    
    cout << cont << endl; 

    for(auto i: ans)
        cout << i.first << endl ;
}