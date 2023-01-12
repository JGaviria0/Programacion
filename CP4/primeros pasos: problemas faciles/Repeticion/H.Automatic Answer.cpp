#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        cin >> m;

        cout << abs(((((((m*567)/9)+7492)*235)/47)-498)/10)%10 << endl; 
    }
}