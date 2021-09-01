#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006], aux, ans[100005];  

    cin >> n; 
    int k = 1; 
    for(int i=1; i<1667; i++) {
        if(i%3 != 0 && i%10 != 3) {
            ans[k] = i; 
            k++; 
        }
    }

    for(int i=0; i<n ; i++) {
        cin >> aux;
        cout << ans[aux] << endl; 
    }

    return 0; 
}
