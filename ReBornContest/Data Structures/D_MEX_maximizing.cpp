/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, x; 

    cin >> n >> x; 

    //algo nuevo

    int aux, actualValue = 0;
    map<int, int> mods; 

    for(int i=0; i<n; i++){
        cin >> aux;
        mods[aux%x]++; 

        while(!mods.empty()){
            if(mods[actualValue%x] > 0){
                mods[actualValue%x]--;
                if ( mods[actualValue%x] == 0){
                    mods.erase(actualValue%x);
                }
                actualValue++; 
            }else {
                break;
            }
        }

        cout << actualValue << endl; 
    }
}