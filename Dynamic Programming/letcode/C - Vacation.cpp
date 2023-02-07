/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e5 + 6;
const int oo = 1e9; 
int n; 
int cache[MAXDATA][4];

int dp(int happ[MAXDATA][4], int index, int last){

    if(index == n){
        return 0; 
    }
    // cout << index << " "<< last << " " << endl;

    
    int aux = -1;
    for(int i=0; i<3; i++){
        if(last == i) continue;

        if(cache[index][i] != -1) {
            aux = max(cache[index][i], aux);
            continue;
        }

        cache[index][i] = happ[index][i] + dp(happ, index+1, i);
        aux = max(aux, cache[index][i]);
    }
    // cout << aux; 
    return  aux; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset(cache,-1, sizeof (cache));
    int m; 

    int happ[MAXDATA][4];

    cin >> n; 


    for(int i=0; i<n; i++) {
        cin >> happ[i][0] >> happ[i][1] >> happ[i][2];
    }

    cout << dp(happ, 0, -1) << endl;
}
