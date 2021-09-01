#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    string s; 
    cin >> s; 

    int ante  = 0;
    int i = 1;
    while(i< s.length()){
        if(s[ante] == s[i]) {
            s = s.substr(0, ante) + s.substr(i+1, s.length()-2);
            ante = 0; 
            i=0; 
        } else {
            ante = i; 
        }
        i++; 
    }

    if(s.length() == 0) {
        cout << "Empty String" << endl;
        return 0; 
    }

    cout << s << endl;


    return 0; 
}
