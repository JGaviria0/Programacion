#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;



int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n; 
    string s[1000]; 
    cin >> n; 
    cin >> s[0]; 

    map <char, vector<char>> reglas; 

    for(int i=1; i<n ;i++){
        cin >> s[i]; 
        for(int j=0; j<min(s[i].length(), s[i-1].length()); j++){
            if(s[i][j] != s[i-1][j]){
                for(int k = 0; k< reglas[s[i][j]].size(); k++){
                    if(reglas[s[i][j]][k] == s[i-1][j]){
                        cout << "Impossible" << endl;
                        //return 0; 
                    }
                }
                // for(int k = 0; k< reglas[ s[i-1][j] - 'a'].size(); k++){
                //     if(reglas[ s[i-1][j] - 'a'][k] == s[i][j] - 'a'){
                //         cout << "Impossible" << endl;
                //         //return 0; 
                //     }
                // }
                reglas[s[i][j]].push_back(s[i-1][j]);
            }
        }
    }

    for(auto k: reglas) {
        cout << k.first << " -> ";
        for(int h =0; h < k.second.size(); h++){
            cout << k.second[h] << endl; 
        } 
    }

    // cambio('a', 'f');
    // cambio('e', 'a');
    // cambio('d', 'f');

    // for(int i=0; i<26; i++){
    //     cout << abc[i];
    // }
    // cout << endl;


    

    return 0; 
}
