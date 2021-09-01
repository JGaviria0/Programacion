#include <bits/stdc++.h>
#include <cstdlib>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, k; 
    string a; 

    cin >> n; 

    while(n--) {
        cin >> a >> k; 

        if (k == 1) {
            char letra = a[0]; 
            for(int i=1; i<a.length(); i++) {
                a[i] = letra; 
            }
        } else {
            char letra = a[0];
            bool ks = false;  
            if (!ks) 
            for(int i=1; i<a.length(); i++) {
                if (!ks) {
                    if(a[i] != letra){
                        int valor = a[i] - '0' + 1;  
                        char letraf = valor + '0'; 
                        if(letraf != letra) {
                            k = true; 
                            a[i] = letraf; 
                        }
                    }
                } else {
                    a[i] = letra; 
                }
            }
        }
    }

    return 0; 
}

