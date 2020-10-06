/*  
https://cses.fi/problemset/task/1087/
Metodo: Greedy (sub-Optimizacion)
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

int main () {
    string ADN; 
    
    cin >> ADN; 

    bool verifica[] = {true, true, true, true};
    char letra[] = {'A', 'T', 'C', 'G'};

    for(int i=0; i<ADN.size(); i++) {
        for(int j =0; j<4; j++) {
            if(ADN[i] == letra[j] && verifica[j]) {
                verifica[j] = false;
                if(!verifica[(j+1)%4] && !verifica[(j+2)%4] && !verifica[(j+3)%4]) {
                    cout << letra[j];
                    verifica[0] = verifica[1] = verifica[2] = verifica[3] = true; 
                }
            }
        }
    }

    for(int j =0; j<4; j++) {
        if(verifica[j]) {
            cout << letra[j] << endl; 
            break;
        }
    }
}