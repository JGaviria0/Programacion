#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n; 
    vector <int > vec; 

    cin >> n; 
    
    int aux; 

    for(int i=0; i<n; i++) {
        cin >> aux; 
        vec.push_back(aux); 
    }
    sort(vec.begin(), vec.end());

    for(int i=0; i<n; i++) {
        cout << vec[i] << " "; 
    }


    return 0; 
}
