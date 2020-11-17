#include <bits/stdc++.h>

using namespace std; 

int main () {
    int n, box;
    vector<pair <int, int >> ve;  
    int a, b;

    for(int i=0; i<n; i++) {
        cin >> a >> b; 
        ve.push_back(make_pair(b,a));
    }

    sort(ve.begin(), ve.end());
}