#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, s, t, time[1000006]; 

    cin >> t >> s >> n; 

    for(int i=0; i<n ;i++) {
        cin >> time[i]; 
    }

    int ti = 1, arriba = 0, abajo = s, i = 0; 
    bool derecho = true;
    //cout << ti << "->" << arriba << " " << abajo << endl; 

    while(ti < t) {

        if(time[i] == ti) {
            i++;
            if(derecho) {
                derecho = false; 
            } else {
                derecho = true; 
            }
        }

        ti++;

        if(derecho && arriba!=0) {
            arriba--;
            abajo++; 
        } 

        if(!derecho && abajo!=0) {
            arriba++;
            abajo--; 
        } 

        //cout << ti << "->" << arriba << " " << abajo << endl; 
    }

    if(derecho) {
        cout << arriba << endl;
    } else {
        cout << abajo << endl;
    }
    return 0; 
}