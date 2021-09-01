#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, t, m, a , b; 

    cin >> t ; 

    while(t--){
        int maxi = -1, a1, b1, a2, b2, aux1, aux;
        cin >> n >> m >> a >> b; 
        int puntas[] = { m, 1, 1, 1, 1, n, m, n } ;
        for(int i=0; i<4; i++){
            aux1 = abs(puntas[i*2] - a) +  abs(puntas[i*2 + 1] - b);
            for(int j=0; j<4; j++){
                if (i != j) {
                    aux = aux1 + abs(puntas[j*2] - puntas[i*2]) +  abs(puntas[j*2 + 1] - puntas[i*2 + 1]);
                    aux += abs(puntas[j*2] - a) +  abs(puntas[j*2 + 1] - b);
                    if (aux > maxi){
                        maxi = aux; 
                        a1 = puntas[i*2];
                        b1 = puntas[i*2 + 1]; 
                        a2 = puntas[j*2];
                        b2 = puntas[j*2 + 1]; 
                    }
                }
            }
        }
        cout << b1 << " " << a1 << " " << b2 << " " << a2 << " " << endl;
    }

    return 0; 
}
