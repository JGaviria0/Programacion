#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, aux;
    stack<int> s; 
    int mini = 1e9; 
    int cont = 0;
    int k; 
    cin >> n >> k; 

    s.push(1);

    for(int i=0; i<n; i++) {
        cin >> aux;
        // cout << aux << " " << s.top() << endl; 
        if(aux == s.top()){
            s.push( s.top() + 1 );
            continue;
        }
        cont++;
    }

    int q = (cont + k - 1) / k;


    cout << q << endl; 
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