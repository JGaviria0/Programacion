/*  
https://cses.fi/problemset/task/1072
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int main ()
{
    int n; 

    cin >> n; 

    for(long long i=1; i<=n; i++){
        long long aux =((i*i*(i*i-1)/2)) - 4*(i-1)*(i-2); 
        cout << aux << endl; 
    }
        
}