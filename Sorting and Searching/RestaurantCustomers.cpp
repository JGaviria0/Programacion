/*  
https://cses.fi/problemset/task/1619
Metodo: Sorting and Searching
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int restaurant[100007];

int main (){

    ios::sync_with_stdio(0); cin.tie(0);
    int a, b, n, entrada[1000006], salida[1000006] ; 

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> entrada[i] >> salida[i]; 
    }

    sort(entrada, entrada+n); 
    sort(salida, salida+n);
    b = a = 0; 
    int personas = 0;
    int maxi = 1;  
    entrada[n] = salida[n] = 1000000009;

    while(a != n || b!=n) {
        if(entrada[a] < salida[b]) {
            personas++;
            a++;
            maxi = max(maxi, personas);
        } else {
            personas--; 
            b++;
        }
    }


    cout << maxi << endl;
}