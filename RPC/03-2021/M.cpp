#include <bits/stdc++.h>

using namespace std; 

int main () {

    int n, a[10000], b[10000], c[10000], aux[4]; 

    cin >> n; 

    for (int i = 0; i<n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i<n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i<n; i++) {
        cin >> c[i];
    }

    for(int i=0 ; i<n ; i++){
        aux[0] = a[i];
        aux[1] = b[i];
        aux[2] = c[i];
        sort(aux, aux + 3);

        if (i != 0){
            cout << " " << aux[1];
        } else {
            cout << aux[1];
        }
        
    }
    cout << endl;
    
}