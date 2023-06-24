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
    stack<char>cola;
    string s;
    int answ = 0;  
    cin >> s; 
    for(char i: s){
        if(!cola.empty()){
            auto x = cola.top();
            cout<<x<<i<<"\n";
            if(x == i)answ++;
            else cola.push(i);
        }
        else cola.push(i);
    }
    double answ2 = answ;
    cout<<answ<<"\n"; 

    
}