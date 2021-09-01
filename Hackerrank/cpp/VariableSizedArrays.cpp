#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, q, q1, q2;
    vector<vector<int>> vec; 

    cin >> n >> q; 

    while(n--) {
        int k ;
        cin >> k ;
        vector<int> newVec;
        int aux; 
        for( int i=0; i<k; i++) {
            cin >> aux; 
            newVec.push_back(aux);
        }
        vec.push_back(newVec);
    }

    while (q--) {
        cin >> q1 >> q2; 
        cout << vec[q1][q2] << endl;
    }

    return 0; 
}
