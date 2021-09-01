#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[2000006];

    string s, s1, s2, s3; 

    cin >> s; 

    s1 = s.substr(0, s.length()/3);
    s2 = s.substr(s.length()/3, s.length()/3);  
    s3 = s.substr(2*s.length()/3, s.length()/3);

    if(s1 == s2 && s2 == s3) {
        cout << s1 << endl; 
    } else if (s1 == s2) {
        cout << s2 << endl; 
    } else if (s1 == s3) {
        cout << s1 << endl;
    } else {
        cout << s2 << endl;
    }

    return 0; 
}
