#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);

    string a, b; 

    cin >> a >> b; 
    
    cout << a.length() << " "<< b.length() << endl;
    cout << a << b<< endl;

    swap(a[0], b[0] ); 
    cout << a << " " << b << endl;

    return 0; 
}
