#include <bits/stdc++.h>

using namespace std; 


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> m; 

    cin >> n; 
    int aux; 
    int sum = 0;
    while(n--) {
        cin >> aux; 
        sum -= aux; 
        sum += m; 
    }

    cout << m + sum << endl; 
}