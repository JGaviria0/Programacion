#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t, n, aux; 

    cin >> t; 

    for(int i=1; i<=t; i++){
        int maxi = -1; 
        cin >> n; 
        for(int i=0; i<n; i++){
            cin >> aux; 
            maxi = max(maxi, aux);
        }
        cout << "Case " << i << ": "<< maxi << endl; 
    }
}