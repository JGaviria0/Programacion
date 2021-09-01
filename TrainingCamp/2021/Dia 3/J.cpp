#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long a, b, l , r; 
    long long f[5]; 

    cin >> r >> l; 
    int aux, aux2; 
    long long i, j, k; 
    for( i = 0; i<= l - r; i++) {
        for( j = i+1; j<= l - r; j++) {
            aux = __gcd(r + i, r + j); 
            if(aux == 1) {
                //cout << "Hola" << endl;
                a = r + i; 
                b = r + j; 
                for( k = j+1;  k <= l - r; k++) {
                    aux2 = __gcd(a, r + k); 
                    aux = __gcd(b, r + k); 
                    if(aux == 1) {
                        if(aux2 != 1){
                            f[0] = a; 
                            f[1] = b; 
                            f[2] = r+k; 
                            sort(f, f+3);
                            for(int h=0; h<3; h++){
                                cout << f[h] << " ";
                            } 
                            cout << endl;
                            return 0; 
                        }
                    } //else {
                    //     if(aux2 == 1){
                    //         f[0] = a; 
                    //         f[1] = b; 
                    //         f[2] = r+k; 
                    //         sort(f, f+3); 
                    //         for(int h=0; h<3; h++){
                    //             cout << f[h] << " ";
                    //         }
                    //         cout << endl;
                    //         return 0; 
                    //     }
                    // }
                }
            }
        }
    }

    cout << -1 << endl;


    // cout << __gcd(900000000000000009, 900000000000000010) << endl;
    // cout << __gcd(900000000000000021, 900000000000000010) << endl;
    // cout << __gcd(900000000000000009, 900000000000000021) << endl;

    return 0; 
}
