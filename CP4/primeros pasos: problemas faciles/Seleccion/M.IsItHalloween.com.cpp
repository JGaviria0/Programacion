#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 
    string s; 
    cin >> s; 
    cin >> n; 

    cout << ((s == "OCT" && n == 31) || (s == "DEC" && n == 25) ? "yup": "nope") << endl;
}