/*  
https://codeforces.com/problemset/problem/1536/D
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

    set<int> s; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int media = a[0];
    int actualValue = -oo;
    s.insert(media); // -oo 2 oo
    s.insert(-oo);
    s.insert(oo);
    for(int i=1; i<n; i++){
        auto it = s.find(media); 

        // cout << "media " <<media  << endl; 
         
        if(a[i] < media && *(--it) > a[i]){
            cout << "NO" << endl; 
            return;
        }

        if(a[i] > media && *(++it) < a[i]){
            cout << "NO" << endl; 
            return;
        }
        media = a[i];
        s.insert(media);
    }

    cout << "YES" << endl; 
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