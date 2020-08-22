/*  
https://cses.fi/problemset/task/1754
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int main(){

    int n, a, b; 

    cin >> n; 

    while(n--){
        cin >> a >> b; 

        int aux = a + b; 

        if(aux % 3 == 0 && a*2 >= b && b >= a/2) 
            cout << "YES" << endl;
        else 
            cout << "NO" << endl; 
    }
}