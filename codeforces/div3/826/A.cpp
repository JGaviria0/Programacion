#include <bits/stdc++.h>

using namespace std; 

void solve() {

    string s1, s2; 

    cin >> s1 >> s2; 

    char last = s1[s1.size()-1];
    char last2 = s2[s2.size()-1];

    map<int, int> m; 

    m['S'] = 1; 
    m['M'] = 2; 
    m['L'] = 3; 

    if (m[last] > m[last2] ) {
        cout << ">" << endl; 
        return; 
    }

    if (m[last] < m[last2]) {
        cout << "<" << endl; 
        return; 
    }

    if (last == 'S') {
        string aux = s1; 
        s1 = s2; 
        s2 = aux; 
    }

    if (s1.size() > s2.size() ) {
        cout << ">" << endl; 
        return; 
    }

    if (s1.size() < s2.size()) {
        cout << "<" << endl; 
        return; 
    }

    cout << "=" << endl; 
   
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