/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA]; 

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 
    string s; 
    cin >> n; 
    cin.ignore();
    while(n--) {
        set<string> words; 
        getline(cin, s, '\n');
        s += "  ";
        // cout << s << endl; 
        string actual = "";
        for(int i=0; i<s.size(); i++){
            if(s[i] != ' '){
                actual += s[i];
            } else {
                // cout << actual << endl;
                words.insert(actual);
                actual = "";
            }
        }
        // for(auto i : words){
        //     cout << i << endl; 
        // } 
        cout << words.size() -1 << endl;
    }

}