#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long a[1000006];
    char ch = ','; 
    int x; 
    string n; 
    cin >> n;
    n = n+'$' ;
    istringstream ss(n);
    
    while(ch != '$') {
        ss >> x >> ch; 
        cout << x << endl;
    }

    return 0; 
}
