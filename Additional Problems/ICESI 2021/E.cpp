#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, k, a[1000006], t, aux;

    cin >> t; 
    while(t--) {
        cin >> n >> k;
        int maxi = -1; 
        for(int i=0; i<n; i++) {
            cin >> a[i]; 
            if(a[i] > maxi) {
                maxi = a[i]; 
            }
        }
        
        int ans = 1000000009;  
        for(int j=1; j<=maxi; j++){
            int cont = 0;
            for(int i=0; i<n; i++){
                if(a[i] != j) {
                    i += k - 1;  
                    cont++; 
                }
            }

            ans = min(cont, ans); 

        }

        cout <<  ans << endl; ; 


    }



    return 0; 
}
