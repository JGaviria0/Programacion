#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[2000006];
    unordered_map <string, int> p;
    bool flag = false ;  

    cin >> n;
    cin.ignore();

    for(int k; k<n; k++){
        if (flag) {
            break ;
        }
        string s;  
        getline(cin, s);
        if('-' == s[0]) {
            p[s.substr(3,s.length()-1)]++; 
        } else {
            int anterior = 0; 
            bool le = true; 
            for(int i=0; i<s.length(); i++) {
                if (le) {
                    if(s[i] == ' '){
                        if (s.substr(anterior, i - anterior) == "->"){
                            le = false;
                        } else if(p[s.substr(anterior, i - anterior)] == 0) {
                            cout << k + 1 << endl;
                            flag = true; 
                            break; 
                        }
                        anterior = i+1; 
                    }
                } else {
                    if(s[i] == ' '){
                        
                        p[s.substr(anterior, i - anterior)]++; 
                        anterior = i+1;
                    }
                }
            }
            int i = s.length(); 
            
            p[s.substr(anterior, i - anterior)]++; 
        }

    } 
    if(!flag){
        cout << "correct" << endl; 
    }


    return 0; 
}
