#include <bits/stdc++.h>

using namespace std; 

int n, w, peso[200], valor[200], dp[1000006]; 

int main () {

    cin >> n >> w; 

    for(int i=0; i<n; i++) {
        cin >> peso[i] >> valor[i]; 
        cout << "hola";
    } 

    dp[0] = 0;

    for(int i=0; i<=n; i++) {
        cout << "hola";
        for (int j=w; j>=peso[i]; j--) {
            cout << j - peso[i]; 
            dp[j] = max(dp[j], dp[j - peso[i]] + valor[i]);
        }
    } 
    
    cout << dp[w] << endl; 
}