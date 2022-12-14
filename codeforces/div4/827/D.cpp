#include <bits/stdc++.h>

using namespace std; 

int memo[2003][2003];


int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    int limit = 1001;

    int lastn[200005];

    for(int i=0; i<1003; i++) {
        lastn[i] = -limit*limit; 
    }

    for(int i=0; i<n; i++) {
        cin >> a[i];
        lastn[a[i]] = i+1; 
    }

    int maxi = -1; 

    for(int i=0; i<limit; i++) {
        for(int j=i; j<limit; j++) {
            if (gcd(i, j) == 1) {
                maxi = max(maxi, lastn[i] + lastn[j]);
            }
        }
    }

    cout << maxi << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    // cout << gcd(7,49) << endl; 

    cin >> n; 

    while(n--) {
        solve();
    }
}