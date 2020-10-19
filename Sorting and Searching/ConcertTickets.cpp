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
    int aux, n, m;
    vector<int>::iterator ans;

    cin >> n >> m; 

    for(int i=0; i<n; i++){
        cin >> aux;
        ticket.push_back(aux*-1); 
    }

    sort(ticket.begin(), ticket.end());


    for(int i=0; i<m; i++) {
        cin >> aux; 
        ans = lower_bound(ticket.begin(), ticket.end(), aux*-1);
        if(ans == ticket.end()) {
            cout << -1 << endl;
        } else {
            cout << *(ans) * -1<< endl;
            ticket.erase(ans);
        }
        
    }   
}