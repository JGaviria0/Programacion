#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, q1; 
    string q2;
    map<string, int> m; 

    cin >> n; 

    while(n--) {
        cin >> q1 >> q2; 
        if(q1 == 1) {
            int q3; 
            cin >> q3; 
            m[q2] += q3; 
            
        } else if(q1 == 2) {
            m[q2] = 0; 
        } else {
            cout << m[q2] << endl;
        }
    }

    return 0; 
}
