/*  
https://cses.fi/problemset/task/1083
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, a[200005], i;
    bool f = false;

    cin >> n; 

    for (int i =0; i<n-1; i++)
        cin >> a[i];

    sort(a, a+n-1);

    for( i=0; i<n-1; i++)
    {
        if (a[i] != i+1){
            cout << i+1 << endl;
            f = true;
            break;
            
        }
               
    }
    if (!f)
        cout << i+1 << endl; 
}