#include <bits/stdc++.h>

using namespace std; 

int main () {

    int n, j, d, a[100005]; 

    cin >> n >> d;

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    j= 0; 

    long long ans = 0; 

    for(int i=0; i<n; i++) {
        while (a[i] - a[j] > d) j++;
        ans += (long long)(i-j) * (i-j-1)/2; 
    }

    cout << ans << endl; 
}