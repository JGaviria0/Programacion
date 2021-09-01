#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006], aux;

    long long  k = 1, h = 1; 
    a[0] = 0; 

    while(k <= 3000000009) {
        a[h] = k; 
        k += h*2 + 1; 
        h++; 
    }

    cin >> n; 

    while(n--) {
        cin >> aux; 
        long long  pos = lower_bound(a, a+h, aux) - a; 
        long long cant = a[pos] - a[pos-1];
        long long  medio = (a[pos] + a[pos-1] + 1)/2;


        if(aux == medio) {
            cout << pos << " " << pos << endl;
        }
        else if(aux > medio) {
            cout << pos << " " << a[pos] - aux + 1 << endl;
        } else {
            cout << aux - a[pos-1]  << " " << pos << endl;
        }
    }

    return 0; 
}
