/*  
https://cses.fi/problemset/task/1070
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h> 

using namespace std;

int main (){

    int n, aux;

    cin >> n;

    if (n<4 && n!=1)
        cout << "NO SOLUTION";
    else
    {
        if(n%2 != 0)
            aux = (n/2)+1;
        else
            aux = n/2;
        
        for(int i=1; i<=n/2; i++)
            cout << i*2 << " ";
    
        for(int i=1; i<=aux; i++)
            cout << i*2-1 << " "; 
        
    }
    cout << endl;
    
}