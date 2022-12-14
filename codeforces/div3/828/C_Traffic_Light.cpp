#include <bits/stdc++.h>

using namespace std; 

const int oo = 1e9; 

void solve() {

    int n, m, a[1000006];
    string s; 
    string cad; 

    cin >> n >> s; 
    cin >> cad; 
    cad += cad; 
    int mini = -1; 
    bool found = false;
    int init = 0; 

    // cout << cad << endl; 

    if(s[0] == 'g') {
        cout << 0 << endl;
        return;  
    }

    for(int i=0; i<n*2; i++){
        // cout << found << " " << i << endl; 
        if(!found){
            if(cad[i] == s[0]){
                init = i;
                found = true; 
            }
        } else {
            if(cad[i] == 'g'){
                found = false; 
                mini = max(mini, i - init);
            }
        }
    }

    cout << mini << endl; 

    
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