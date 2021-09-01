#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006];

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i]; 
    }

    sort(a, a+n); 
    int i=0, j = n-1, cont = 0;
    while(i < j) {
        cout << a[i] << " "; i++; 
        cout << a[j] << " "; j--; 
        cont += 2; 
    }

    if (cont != n) {
        cout << a[i]; 
    }

    cout << endl;
    return 0; 
}
