#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, m; 
    string a[1006];

    cin >> n >> m; 

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    long long apples = 0; 
    long long ans = 0; 


    for(int i=n-1; i>=0; i--){
        if (a[i] == "halfplus"){
            apples = apples*2 + 1; 
            ans += (apples/2)*m + m/2; 
        } else  {
            apples = apples*2; 
            ans += (apples/2)*m;  
        }
    }

    cout << ans << endl;

    return 0; 
}
