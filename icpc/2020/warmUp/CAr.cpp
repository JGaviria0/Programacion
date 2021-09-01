#include <bits/stdc++.h>

using namespace std; 

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1006], b[1006], t;

    cin >> n >> t; 

    cin >> a[0];

    for (int i=1; i<n; i++){
        cin >> a[i];
        b[i] = a[i] - a[i-1];
    }

    int cont = 0, maxi = -1; 
    for(int i=1; i<n ; i++){
        if(b[i] <= t){
            // cout << b[i] << " - " << cont << " "; 
            cont++;
        }else {
            if (cont > maxi){
                maxi = cont;
                cont = 0; 
            }
        }
    }

    if (cont > maxi){
        maxi = cont;
        cont = 0; 
    }

    cout << maxi + 1;

    return 0; 
}
