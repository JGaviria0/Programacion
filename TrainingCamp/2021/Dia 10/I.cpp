#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, k;
    long double a[100005];
    bool b[100005];
    string ope; 
    int cont = 0; 

    for(int j=1; j<101; j++){
        a[j] = j; 
        b[j] = true; 
    }
    long long aux;

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> ope >> k; 
        for(int j=0; j<101; j++){
            if (b[j]) {
                if(ope == "ADD"){
                    a[j] += k;  
                } else if(ope == "SUBTRACT"){
                    a[j] -= k;
                } else if(ope == "MULTIPLY"){
                    a[j] = a[j]* k; 
                } else {
                    a[j] = a[j]/k; 
                }

                aux = a[j] + 0; 
                if(aux < 0){
                    cont++;
                    b[j] = false;  
                } else if(a[j] - aux != 0) {
                    cont++; 
                    b[j] = false;  
                }
            }
        }
    }

    cout << cont << endl;



    return 0; 
}
