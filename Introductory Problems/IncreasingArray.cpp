/*  
https://cses.fi/problemset/task/1094
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a[200005];
    long long cont =0;

    cin >> n; 

    for(int i =0; i<n; i++)
        cin >> a[i]; 
    
    for(int i =1; i<n; i++)
    {
        while(a[i] < a[i-1]){
            cont++;
            a[i]++;
        }
    } 

    cout << cont << endl;
}