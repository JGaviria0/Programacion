/*  
https://cses.fi/problemset/task/1069
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int main() {

    int n, cont = 1, aux = 0;
    string a; 

    cin >> a; 

    for(int i=0; i<a.size(); i++)
    {
        if(a[i] == a[i+1])
            cont++;
        else{
            aux = max(cont, aux);
            cont = 1;
        }
            
    }

    cout << aux << endl;
        
}