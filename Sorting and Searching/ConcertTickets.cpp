/*  
https://cses.fi/problemset/task/1091
Metodo: Sorting and Searching
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int n, m, ticket[200005], person[200005];

int BB(int b, int e, int k){

    while (b>=e)
    {
        int mid = (b+e)/2; 
        if(ticket[mid] <= k) {
            e = mid + 1;
        } else {
            b = mid + 1; 
        }
    }
    return b; 
}

int main (){

    cin >> n >> m; 

    for(int i=0; i<n; i++)
        cin >> ticket[i]; 

    sort(ticket, ticket+n); 

    for(int i=0; i<m; i++)
        cin >> person[i]; 
    
}