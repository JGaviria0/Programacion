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
    stack<int> st; 

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> m; 
        st.push(m);
    }
    int cont = 0; 
    while(st.size()>=2){
        int a = st.top();
        st.pop();
        int b = st.top();
        if((a + b)%2){
            cont+=1; 
        }else{
            st.pop();
        }
    }

    cout << cont +  ( st.size() == 1 ? 1 : 0 )<< endl;
}