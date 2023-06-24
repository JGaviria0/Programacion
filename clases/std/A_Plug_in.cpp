/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    string s; 
    stack<char> st; 
    stack<char> st2; 

    cin >> s; 

    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
    }

    while(!st.empty()){

        if(!st2.empty() && st2.top() == st.top()){
            st2.pop();
        } else {
            st2.push(st.top());
        }
        st.pop();
    }

    while(!st2.empty()){
        cout << st2.top(); 
        st2.pop();
    }


}