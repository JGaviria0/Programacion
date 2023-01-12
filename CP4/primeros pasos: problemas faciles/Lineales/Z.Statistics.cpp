#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, aux, i=1;  
    while(cin >> n){
        cout << "Case " << i << ": ";
        i++; 
        int mini = 1e9, maxi=-1e9; 
        for(int i=0; i<n; i++){
            cin >> aux; 
            mini = min(aux, mini);
            maxi = max(aux, maxi);
        }

        cout << mini << " "<< maxi << " " << maxi - mini << endl; 

    }
     
}