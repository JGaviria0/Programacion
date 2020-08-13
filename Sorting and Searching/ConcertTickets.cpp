/*  
https://cses.fi/problemset/task/1091
Metodo: Sorting and Searching
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int BB(int i, int b, int e, int k){

    if (b == e)
    {
        if (ticket[b] == k)
            return b;
        else
            return b*-1; 
    }
    int mid = (b+e)/2, left= i*2; right = left + 1; 
    if()
}

int main (){

    int n, m, ticket[200005], person[200005];

    cin >> n >> m; 

    for(int i=0; i<n; i++)
        cin >> ticket[i]; 

    sort(ticket, ticket+n); 

    for(int i=0; i<m; i++)
        cin >> person[i]; 
    
    



    
}