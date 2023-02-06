/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, r, s; 

    cin >> n >> r >> s; 

    int maxi = r -s ;

    cout << maxi << " ";

    int minis = maxi; 
    int total = maxi; 
    bool fullones = false; 
    int i = n-1; // 4
    while(total != r){ // 4 != 9 
        --i; // 3
        if(fullones){ //false
            cout << 1 << " ";
            total++;
            continue;
        }
        if(r - total - minis == i){ // 9 - 4 - 4 = 1 != 3
            cout << minis << " "; 
            total += minis;
            fullones = true;
            continue;  
        }
        // cout << total << " " << minis << " " << r << " " << i << endl; 
        if(r - total - minis  < i){
            i++;
            minis--; 
            continue;
        } 

        cout << minis << " ";
        total += minis;

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