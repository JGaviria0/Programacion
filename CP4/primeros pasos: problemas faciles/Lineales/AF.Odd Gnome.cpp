#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t, n, aux; 

    cin >> t; 

    while(t--) {
        cin >> n;
        int last;
        bool flag = false; 
        cin >> last;  
        for(int i=1; i<n; i++){
            cin >> aux;
            if(last + 1 != aux && !flag){
                cout << i+1 << endl; 
                flag = true; 
            }
            last = aux; 
        }
    }
}