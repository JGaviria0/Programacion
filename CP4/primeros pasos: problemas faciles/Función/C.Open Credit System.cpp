#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, t, aux; 

    cin >> t; 

    while(t--) {
        int maxi = -1e9;
        int maxlocal = -1e9;
        cin >> n; 
        while(n--){
            cin >> aux; 
            maxi = max(maxlocal - aux, maxi); 
            maxlocal = max(aux, maxlocal);
        }
        cout << maxi << endl; 
    }
}