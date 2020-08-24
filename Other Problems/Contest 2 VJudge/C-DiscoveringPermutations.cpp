#include <bits/stdc++.h>

using namespace std; 

int t, n, k, cont = 0;
string aux; 

vector<char> all; 

int solve(int j, string w, vector<char> ans){

    if(cont == k) return 0; 

    if(j>n) return 0; 

    if(ans.empty()) {
        cout << w << endl;
        cont++;  
    }
    for(int i=0; i<ans.size(); i++){
        aux = w + ans.at(i); 
        ans.erase(ans.begin() + i); 
        solve(j+1,aux, ans);
        ans.push_back(char(i+65));
        solve(j+1, w, ans); 
    }
}

int main (){ 

    cin >> t; 
    string w;

    while(t--){

        cin >> n >> k; 

        for(int i=0; i<n; i++)
        {
            all.push_back(char(i+65));  
        }

        solve(0, w, all); 
    }
}