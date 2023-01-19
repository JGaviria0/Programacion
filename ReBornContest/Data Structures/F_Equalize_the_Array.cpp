/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 2e5 + 10;

void solve() {

    int n, a[MAXDATA]; 

    set<int> allocu; 
    map<int, int> ocu;  
    cin >> n; 
    int maxi = -1; 
    for(int i=0; i<n; i++) {
        cin >> a[i];
        ocu[a[i]]++; 
        maxi = max(maxi, ocu[a[i]]);
    }

    for(auto ele : ocu){
        allocu.insert(ele.second);
    }

    int ans = 1e9; 
    for(auto ocurre: allocu){
        int sum = 0; 
        for(auto ele : ocu){
            if(ele.second < ocurre){
                sum += ele.second; 
            } else {
                sum += ele.second - ocurre; 
            }
        }
        ans = min(sum, ans);
    }

    cout << ans << endl; 


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
