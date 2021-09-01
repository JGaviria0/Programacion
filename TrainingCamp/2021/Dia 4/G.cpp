#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, t; 
    string s; 

    cin >> t; 

    while(t--) {
        cin >> n; 
        map <char, int> let; 
        for(int i=0; i<n; i++){
            cin >> s; 
            for(int j=0; j<s.length(); j++){
                let[s[j]]++; 
            }
        }
        bool t = true; 
        for(auto k : let){
            if(k.second%n != 0){
                t = false; 
            }
        }

        if(t) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }

    return 0; 
}
