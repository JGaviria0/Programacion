#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m, t; 

    cin >> t; 
    int index = 0; 

    while(t--) {
        index++; 
        int last = -1, aux, up = 0, down = 0; 
        cin >> n; 
        for(int i=0; i<n; i++){
            cin >> aux; 
            if(aux > last){
                up++; 
            }

            if(aux < last){
                down++; 
            }

            last = aux; 
        }

        cout << "Case " << index << ": " << up-1 << " " << down << endl;
    }
}