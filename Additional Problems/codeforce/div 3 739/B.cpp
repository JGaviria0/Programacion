#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a,b,c; 

    cin >> n; 

    while(n--) {
        cin >> a >> b >> c; 

        if(a < b) {
            swap(a,b);
        }

        bool ans = false; 
        //cout << a << b << endl;
        if(a >= 2*b) {
            
            int vueltas = a - b;
            //cout << vueltas << endl;
            if (c <= vueltas*2) {
                if (c > vueltas) {
                    cout << c - vueltas<< endl;
                    continue; 
                } else {
                    cout << vueltas + c << endl;
                    continue; 
                }
            }
        }
        cout << -1 << endl;
    }

    return 0; 
}
