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

    string target = "mMeEoOwW";


    string s; 

    s+= 'W';

    cin >> n >> s; 
    int pos = 0;  
    for(int i=0; i<n; i++){
        if(s[i] == target[pos] || s[i] == target[pos+1]){
            continue;
        } else {
            if(s[i] == target[pos+2] || s[i] == target[pos+3]){
                pos+= 2; 
            } else {
                cout << "NO" << endl; 
                return; 
            }
        }
    }
    if(pos == 6){
        cout  << "YES" << endl; 
    } else {
        cout  << "NO" << endl; 

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