#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, q, qs; 
    vector<int> vec; 

    cin >> n; 

    for(int i=0; i<n; i++) {
        int aux; cin >> aux; 
        vec.push_back(aux);
    }

    cin >> q;

    while(q--) {
        cin >> qs; 
        int its = lower_bound(vec.begin(), vec.end(), qs) - vec.begin(); 

        if(vec[its] == qs) {
            cout << "Yes ";
        } else {
            cout << "No ";
        }
        cout << its + 1 << endl;
    }

    return 0; 
}
