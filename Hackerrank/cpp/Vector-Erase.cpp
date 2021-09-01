#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, q, q1,q2;
    vector <int> vec; 

    cin >> n; 

    for(int i=0; i<n ;i++) {
        int aux; cin >> aux; 
        vec.push_back(aux); 
    }

    cin >> q; 
    vec.erase(vec.begin() + q - 1); 
    cin >> q1 >> q2; 
    vec.erase(vec.begin()+q1 -1, vec.begin() +q2-1);

    cout << vec.size() << endl;

    for(int i=0; i<vec.size() ;i++) {
        cout << vec[i] << " "; 
    }


    return 0; 
}
