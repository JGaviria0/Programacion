#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 
    int mini = 1e9, pos, aux;

    for(int i=0; i<n; i++) {
        cin >> aux; 
        if(aux< mini){
            mini = aux;
            pos = i; 
        }
    }

    cout << pos << endl;
}