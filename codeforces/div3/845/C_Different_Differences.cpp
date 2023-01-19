/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int k, n; 

    cin >> k >> n;

    cout << 1 << " " << 2 << " ";

    int currentN = 2;
    int currentDifference = 2;  
    int pos = 2; 

    for(int i=2; i<k; i++){
        pos++;
        // cout << "test: ";
        // cout << n - currentDifference - currentN << " " << k - 1 - pos << endl; 
        if( n - currentDifference - currentN > k - 1 - pos){
            cout << currentDifference + currentN << " ";
            currentN += currentDifference;
            currentDifference++;
            continue;
        }

        cout << currentN + 1 << " ";
        currentN++;
    }

    cout << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}