#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    int a[10004]; 

    memset(a, 0, sizeof a);

    map <char, int> let; 

    cin >> s; 

    for(int i=0; i<s.length(); i++){
        let[s[i]]++;
    }

    int i =0;  
    for(auto [k,v]: let){
        a[i] = -v; 
        i++; 
    }

    sort(a, a+i);

    cout << s.length() + (a[0] + a[1]) << endl;

    return 0; 
}
