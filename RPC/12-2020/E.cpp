#include <bits/stdc++.h>

using namespace std; 

int nodos[500005], totales[500005];
int redireccion[500005]; 

int mcd (int a, int b){
    if (b == 0) return a;
    mcd(b , a%b);  
}

int main () {
    int n, m;
    int a, b, c;
    int cont = 1, cont2 = -1; 
    memset( redireccion, -100, sizeof redireccion);
    cin >> n >> m; 

    for(int i=0; i<m; i++) {
        cin >> c; 
        if(c == 1) {
            cin >> b >> a; 

            cout << redireccion[-1*totales[nodos[a]]] << " " << redireccion[-1*totales[nodos[b]]] << endl;
            if(nodos[a] == 0 && nodos[b] == 0) {
                cout << "Dentro 1" << endl;
                nodos[a] = nodos[b] = cont;
                totales[cont] = 2; 
                cont++; 
            } else if (nodos[a] != nodos[b]){
                
                    if ((nodos[a] != nodos[b]) && nodos[a] != 0 && nodos[b] != 0) {
                        cout << "Dentro 3 ->"<< endl;
                        totales[nodos[a]] += totales[nodos[b]];
                        totales[nodos[b]] = cont2;
                        redireccion[cont2*-1] = nodos[a];
                        cont2--; 
                    } else {
                        //cout << nodos[a] << " " << nodos[b];
                        if(nodos[b] == 0) {
                            cout << "Dentro 4 " << totales[nodos[a]] << endl;
                            if (totales[nodos[a]] > 0) {
                                totales[nodos[a]]++; 
                                nodos[b] = nodos[a]; 
                            } else {
                                //cout << "Dentro 4.5" << endl;
                                int redi = redireccion[-1*totales[nodos[a]]]; 
                                totales[nodos[redi]]++; 
                                nodos[b] = nodos[a]; 
                            }
                        } else {
                            cout << "Dentro 5" << totales[nodos[b]] << endl;
                            if (totales[nodos[b]] > 0) {
                                totales[nodos[b]]++; 
                                nodos[a] = nodos[b]; 
                            } else {
                                //cout << "Dentro 5.5" << endl;
                                int redi = redireccion[-1*totales[nodos[b]]]; 
                                totales[nodos[redi]]++; 
                                nodos[a] = nodos[b]; 
                            }
                        }
                    }
                
            }
        } else {
            int ans = 0, indi = 0, to = 0;
            for(int i=1; i<cont; i++) {
                cout << totales[i] << " ";
                if(totales[i] > 0) {
                    to++; 
                    indi += totales[i]; 
                    ans += (totales[i]*totales[i]); 
                }
            }
            int res = n - indi; 
            int di = ans+res, divisor = to + res; 
            int MCD = mcd (di, divisor); 
            //cout << indi << endl;

            cout << di/MCD << "/" << divisor/MCD << endl; 
        }
    }
}