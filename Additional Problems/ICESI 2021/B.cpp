#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[100005],x, aux; 

    cin >> n >> x;  

    for(int i=0; i<n ;i++) {
        cin >> aux; 
        if(i == 0) {
            if(aux != x) {
                cout << aux;
            }  
        } else {
            if(aux != x) {
                cout << " " << aux; 
            } 
        }

    }

    cout << endl;

    return 0; 
}
