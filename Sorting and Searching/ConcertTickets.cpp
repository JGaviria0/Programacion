/*  
https://cses.fi/problemset/task/1091
Metodo: Sorting and Searching
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int main (){

    ios::sync_with_stdio(0); cin.tie(0);
    vector<int> ticket;
    vector<int> costumers;
    int aux, n, m;

    cin >> n >> m; 

    for(int i=0; i<n; i++){
        cin >> aux;
        ticket.push_back(aux); 
    }

    sort(ticket.begin(), ticket.end());

    for(int i=0; i<m; i++) {
        cin >> aux; 
        
        auto found = lower_bound(ticket.begin(), ticket.end(), aux+1);

        if (found == ticket.begin()){
            cout << -1 << endl; 
            continue;
        }
        found--; 

        cout << *found << endl ;
        ticket.erase(found);
    }

    


    
}