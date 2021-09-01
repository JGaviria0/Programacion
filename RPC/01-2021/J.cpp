#include <bits/stdc++.h>

using namespace std; 

int main () {

    ios::sync_with_stdio(0); cin.tie(0);
    long long t, n, ans; 
    scanf("%lld", &t);

    while(t--) {
        scanf("%lld", &n);
        ans = (n*(n+1)*(n+2))/6;
        printf("%lld\n", ans);
    }
}