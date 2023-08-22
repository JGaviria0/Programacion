#include<bits/stdc++.h>

using namespace std; 

int main(){

    string s; 

    cin >> s; 

    map<int, int>m; 
    for(int i=0; i<s.size(); i++){
        if(s[i] != '+'){
            m[s[i]]++;
        }
    }

    string res = "";
    for(auto a: m){
        cout << a.first << " " << a.second << endl; 
        // for(int i=0; i<a.second; i++){
        //     res += a.first + "+";
        // }
    }

    res[res.size()] = '\n';

    cout << res << endl; 
}