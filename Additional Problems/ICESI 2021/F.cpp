#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006], maxi = -1, sum = 0;

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i]; 
        if(a[i] > maxi) {
            maxi = a[i];
        }
    }

    for(int i=0; i<n; i++) {
        sum += maxi - a[i]; 
    }

    cout << sum << endl;
    return 0; 
}
