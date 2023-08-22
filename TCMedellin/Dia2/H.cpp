#include <bits/stdc++.h> 

using namespace std; 

int main(){

    int n; 
    map<string, int>m; 
    cin >> n; 
    for(int i=0; i<n; i++){
        vector<string> vs; 
        string origin; 
        cin >> origin; 
            // cout << "INIT ---------------------" << endl; 
        for(int j=0; j<origin.size(); j++){
            string aux;
            for(int k=0; k<origin.size(); k++){
                aux += origin[(k+j)%origin.size()];
            }
            vs.push_back(aux);
            // cout << aux << endl; 
        } 

        sort(vs.begin(), vs.end());

        m[vs[0]]++; 
        
    }

    cout << m.size() << endl ;
}