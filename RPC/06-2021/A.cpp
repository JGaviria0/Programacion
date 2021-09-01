#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;
const long double pi = 3.14159265359;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    long double aux2;
    int aux3;
    string aux; 
    vector<pair<long double,int>> a; 

    cin >> n; 

    for(int i=0; i<n ;i++) {
        cin >> aux >> aux2; 
        if (aux == "cube"){
            aux2 = aux2*aux2;
            aux3 = 1; 
        } else {
            aux2 = pi*aux2*aux2;
            aux3 = 0;
        }

        a.push_back(make_pair(aux2, aux3));
    }

    sort(a.begin(), a.end());
    
    for(int i=0; i<n-1; i++){
        int base1, base2, diagonal, diametro; 
        if(a[i].second != 1){ // circulo
            base1 = sqrt(a[i].first/pi);
            diametro = base1*2;
            if(a[i+1].second == 1) { //cuadrado 2
                base2 = sqrt(a[i+1].first);
                //cout << diametro << " " << diagonal << endl;
                if(base2 < diametro){
                    cout << "impossible" << endl;
                    return 0; 
                }
            } 
        }else { // cuadrado
            base1 = sqrt(a[i].first);
            diagonal = 2*base1*base1; 
            if(a[i+1].second != 1) {
                base2 = sqrt(a[i+1].first/pi);
                diametro = base2*base2*4; 
                //cout << diagonal << " " << diametro << endl;
                if(diametro < diagonal){
                    cout << "impossible" << endl;
                    return 0; 
                }
            } 
        }
    }

    for(int i=0; i<n; i++){
        if(a[i].second == 1) {
            cout << "cube ";
            cout << sqrt(a[i].first) << endl; 
        } else {
            cout << "cylinder ";
            cout << sqrt(a[i].first/pi) << endl; 
        }
    }

    return 0; 
}
