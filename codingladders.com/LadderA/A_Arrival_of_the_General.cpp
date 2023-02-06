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
    int maxi = -1, mini = 1e9;
    int posmaxi, posmini;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]<= mini){
            mini = a[i];
            posmini = i;
        }

        if(a[i]> maxi){
            maxi = a[i];
            posmaxi = i;
        }
    }

    // cout << posmaxi << " " << posmini << endl; 
    int pos = 0; 
    if(posmaxi > posmini){
        pos = -1;
    }

    // cout << pos << endl; 

    cout << posmaxi + n - posmini + pos -1<< endl; 
}