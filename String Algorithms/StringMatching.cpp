/*  
https://cses.fi/problemset/task/1753/
Metodo: Hash
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

long long MOD = 1e9 + 7;
long long sum[1000006];

int main() {
    
    long long n, primo = 1777771, m = 999727999, p, valorHash = 0;
    string palabra, NumeroLetras; 

    cin >> palabra >> NumeroLetras; 
    p = 1; 
    for(long long i=0; i<palabra.size(); i++){
        long long NumeroLetra = palabra[i] - ('a' - 1);  
        sum[i+1] = (sum[i] + (NumeroLetra*p))%m; 
        p = p*primo%m; 
    }
    p = 1;
    for(int i=0; i<NumeroLetras.size(); i++){
        int NumeroLetra = NumeroLetras[i] - ('a' - 1);  
        valorHash = (valorHash + (NumeroLetra*p))%m;
        p = p*primo%m;
    }
    p = 1;
    //cout << "valor hash "  <<valorHash << endl; 
    int j = 0; 
    long long cont = 0; 

    for(int i=NumeroLetras.size(); i<=palabra.size(); i++) {  
        //cout << (sum[i]-sum[j]+m)%m << " " << valorHash << endl;
        if((sum[i]-sum[j]+m)%m == valorHash) {
            cont++; 
        }
        valorHash = valorHash*primo%m;
        j++; 
    }

    cout << cont << endl;

}