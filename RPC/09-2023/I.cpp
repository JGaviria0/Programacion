#include <bits/stdc++.h>

using namespace std; 

int main(){

    int n, q; 

    cin >> n >> q; 

    map<string, int> streets; 

    string aux; 

    for(int i=0; i<n; i++){
        cin >> aux;
        streets[aux] = i; 
    }
    string from, to; 
    for(int i=0; i<q; i++){
        cin >> from >> to; 

        cout << abs(streets[from] - streets[to]) - 1 << endl; 
    }
}