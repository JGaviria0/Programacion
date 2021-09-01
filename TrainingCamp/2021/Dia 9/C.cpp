#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, aux; 

    vector<int> a; 

    cin >> n; 


    for(int i=0; i<n; i++){
        cin >> aux;
        a.push_back(aux);
    }

    if(n < 6){
        cout << n << endl;
    } else if(n%6 != 0){
        cout << n%6 << endl;
    } else {
        cout << 0 << endl;
    }

    

    return 0; 
}
