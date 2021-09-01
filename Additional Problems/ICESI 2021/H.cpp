#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    string a; 
    string bulba = "Bulbasaur"; 

    map<char, int> m; 

    cin >> a; 
    int k = 0, cont = 0;
    for(int i=0; i<a.length(); i++) {
        m[a[i] ]++; 
    }

    cont = min({ m['B'], m['b'], m['l'], m['u']/2, m['a']/2, m['r'], m['s']});

    cout << cont << endl;

    return 0; 
}
