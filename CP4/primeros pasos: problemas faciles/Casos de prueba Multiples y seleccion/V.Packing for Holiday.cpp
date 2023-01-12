#include <bits/stdc++.h>

using namespace std; 


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    for (int i=0; i<n; i++){
        int a, b, c; 
        cin >> a >> b >> c; 
        cout << "Case " << i+1 << ": " << ((a <=20 && b<=20 &&c <=20)? "good":"bad") << endl;
    }
}