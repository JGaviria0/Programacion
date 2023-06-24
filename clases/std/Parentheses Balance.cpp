/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    string s; 
    getline(cin, s, '\n');
    stack<char> st; 

    for(int i=0; i<s.size(); i++){
        if(s[i] == '(' ){
            st.push(')');
        }else if (s[i] == '['){
            st.push(']');
        } else {
            // cout << s[i] << " " << st.top() << endl; 
            if(st.empty() || s[i] != st.top()){
                cout << "No" << endl; 
                return; 
            }
            st.pop();
        }
    }
    if(st.empty()){
        cout << "Yes" << endl; 
    } else {
        cout <<"No" << endl; 
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 
    cin.ignore();

    while(n--) {
        solve();
    }
}