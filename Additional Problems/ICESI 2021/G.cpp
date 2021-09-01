#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

long long a[20][20];

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n; 

    cin >> n; 

    for(int i=0; i<=n; i++) {
        a[1][i] = 1; 
        a[0][i] = 0; 
        a[i][1] = 1; 
        a[i][0] = 0; 
    }
    long long maxi = -1; 
    for(int i=2; i<=n; i++) {
        for(int j=2; j<=n; j++) {
            a[i][j] = a[i-1][j] + a[i][j-1];
            if(a[i][j] > maxi) {
                maxi = a[i][j]; 
            }
        }
    }

    if(maxi == -1) {
        maxi = 1; 
    }

    cout << maxi << endl;

    return 0; 
}
