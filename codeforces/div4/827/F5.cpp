#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n;

    cin >> n; 
    int a,b;
    string s; 

    int as = 0; 
    int asb= 0; 

    bool kind = false;
    bool kindb = false;
    for(int i=0; i<n; i++) {
        cin >> a >> b >> s; 

        if (kindb){
            cout << "YES" << endl; 
            continue;; 
        }

        for(int i=0; i<s.size(); i++){
            if(s[i] != 'a' && a == 1){
                kind = true; 
                break;
            }   

            if(s[i] != 'a' && a == 2){
                kindb = true; 
                // cout << "Different b" << endl; 
                break; 
            }  

            if (a == 1) {
                as += b; 
            } else{
                asb += b; 
            }
        }
        // cout << as << " " <<asb << endl ;
        if((as < asb && !kind )|| kindb) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl ;
        }
    }
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