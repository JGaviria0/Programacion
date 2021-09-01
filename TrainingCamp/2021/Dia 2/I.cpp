#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, m, aux;  
    long long prefix[1002]; 

    cin >> n >> m; 

    prefix[0] = 0; 
    for(int i=1; i<=n; i++){
        cin >> prefix[i];
    }
    long long ans = 0; 
    long long maxi = -1; 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n - i + 1; j++){
            ans = 0; 
            for(int k=j; k<j+i; k++){
                ans =  (ans%m + prefix[k]%m)%m;    
                // cout << prefix[k] << " "; 
            }
            // cout << "->" << ans << endl;
            if(maxi < ans){
                maxi = ans; 
            }
        }
    }
    long long a = 0; 
    cout << max(a, maxi) << endl; 

    return 0; 
}
