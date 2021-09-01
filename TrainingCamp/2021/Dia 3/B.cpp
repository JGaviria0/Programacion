#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n , k, aux; 
    int a[1000006]; 
    int b[1000006]; 

    cin >> n >> k; 

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    for(int i=0; i<n-k+1; i++){
        int h =0; 
        for(int j=i; j<k+i; j++){
            b[h] = - a[j]; 
            h++; 
        }
        sort(b, b+h); 
        for(int j=0; j<)
    }
    
    return 0; 
}
