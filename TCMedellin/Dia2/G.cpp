#include <bits/stdc++.h>

using namespace std; 

int main (){


    string s; 
    int t; 

    cin >> t; 


    while(t--){
        map<char, int> m; 
        cin >> s; 
        int n = s.size();
        int cont = 0; 

        for(int i=0; i<n; i++){
            m[s[i]]++; 
            
        }
        int maxi = -1; 
        for(auto a: m ){
            // cout << a.first << " " << a.second << endl; 
            maxi = max(maxi, a.second);
        }

        cout << n - maxi<< endl; 
    }
}