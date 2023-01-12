#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, k = 1; 
    

    while(cin >> n) {
        
        int aux, a = 0, b =0; 
        if (n == 0) return 0; 
        cout << "Case " << k << ": ";
        k++;

        for(int i=0; i<n; i++){
            cin >> aux; 
            if(aux > 0) a++; else b++;
        }


        cout << a - b << endl; 

    }
}