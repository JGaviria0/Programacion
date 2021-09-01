#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a , b; 
    int vec[1000006];

    cin >> n >> a >> b; 

    for(int i=0; i<n; i++){
        cin >> vec[i]; 
    } 

    sort(vec, vec+n); 

    cout << vec[b] - vec[b-1] << endl; 

    return 0; 
}
