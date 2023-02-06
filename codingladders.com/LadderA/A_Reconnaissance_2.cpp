/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, a[MAXDATA]; 

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    a[n] = a[0];
    pair<int, int> p;
    int mini = 1e9; 
    for(int i=1; i<=n; i++){
        
        if(mini > abs(a[i] - a[i-1])){
            mini = abs(a[i] - a[i-1]);
            p = {i, (i%n)+1};
        }

    }

    cout << p.first << " " << p.second << endl; 
}