/*  
https://cses.fi/problemset/task/1621
Metodo: Sorting and Searching
Jhon Alex Gaviria
*/


#include <bits/stdc++.h> 

using namespace std; 

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int n, lis[200005]; 

    cin >> n; 

    for(int i=0; i<n; i++)
        cin >> lis[i];

    sort(lis, lis + n);

    int i = 0;  
    int cont = 0; 

    while(i<n)
    {
        i = upper_bound(lis, lis+n, lis[i]) - lis; 
        cont++; 
    } 

    cout << cont << endl; 
}