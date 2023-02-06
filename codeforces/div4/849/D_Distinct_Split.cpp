/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n; 

    cin >> n;

    map<char, int> l, r; 

    string s; 

    cin >> s; 

    for(int i=0; i<n; i++){
        r[s[i]]++; 
    }
    int maxi = -1; 
    for(int i=0; i<n; i++){
        int res = r.size() + l.size();
        maxi = max(maxi, res);

        l[s[i]]++; 
        r[s[i]]--; 
        if(r[s[i]] <= 0){
            r.erase(s[i]);
        }
    }

    cout << maxi << endl; 
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