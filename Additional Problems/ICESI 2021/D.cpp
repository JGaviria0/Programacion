#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int m, n, a[1000006], q1, q2; 

    cin >> n >> m; 
    long long sum = 0; 
    long long sum2 = 0; 
    for(int i=0; i<n; i++) {
        cin >> q1 >> q2; 
        sum += q1; 
        sum2 += q2; 
        a[i] = q1 - q2; 
    }

    if (sum2 > m) {
        cout << -1 << endl;
        return 0;
    }

    sort(a, a+n); 
    int i = n-1;
    int cont = 0;  

    while(sum > m) {
        sum -= a[i]; 
        i--; 
        cont++; 
    }

    cout << cont << endl;

    return 0; 
}
