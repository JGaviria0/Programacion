/*  
https://cses.fi/problemset/task/1090
Metodo: Sorting and Searching
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int n, x, child[200005]; 

int solve(){

    int i = 0, j = n - 1, cont = 0; 

    while(i <= j){
        if (child[j] + child[i] <= x)
        {
            cont++;
            i++; 
        }
        else if (child[j] <= x)
            cont++; 

        j--;  
    }
    return cont; 
}

int main(){

    ios::sync_with_stdio(0); cin.tie(0);
    
    cin >> n >> x; 

    for(int i=0; i<n; i++)
        cin >> child[i]; 

    sort(child, child+n); 

    cout << solve() << endl;
}