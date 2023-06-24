/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 


bool check(string a){

    for(int i=0; i<a.size()-1; i++){
        if(a[i] == a[i+1]){
            return false; 
        }
    }

    return true; 
}

void solve() {

    int n, m; 

    string a, b; 

    cin >> n >> m;

    cin >> a >> b; 

    string auxa = a; 
    string auxb = b; 

    if(check(a) && check(b)){
        cout << "YES" << endl; 
        return; 
    }


    for(int i=0; i<n-1; i++){
        b+= a[a.size()-1];
        a = a.substr(0, a.size()-1);
        if(check(a) && check(b)){
            cout << "YES" << endl; 
            return; 
        }
    }

    a= auxa; 
    b = auxb; 

    for(int i=0; i<m-1; i++){
        a += b[b.size()-1];
        b = b.substr(0, b.size()-1);
        if(check(a) && check(b)){
            cout << "YES" << endl; 
            return; 
        }
    }


    cout << "NO" << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}