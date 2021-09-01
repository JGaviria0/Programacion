#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[2000006], aux;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> aux; 
        a[i] = aux * -1; 
    }

    sort(a, a+n);

    double pro = 0.5, ans = 0; 
    for(int i=0; i<n; i++){
        ans += pro*a[i]*-1;
        pro = pro*0.5;
    }

    cout << ans << endl;

    return 0; 
}
