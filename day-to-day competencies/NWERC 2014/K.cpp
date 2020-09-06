#include <bits/stdc++.h>

using namespace std; 

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int n, s, t, naux, saux, taux;
    long long ans, total; 
    map <int, int> equipaje; 
    map <int, int> aux;
    pair <int, int > in, out;  

    cin >> n >> s >> t; 

    for (int i= 0; i<n; i++){
        cin >> naux; 
        equipaje[naux]++;  
    }

    ans = 1e18;  

    for (auto i : equipaje) {

        aux = equipaje;
        in = i;
        total = 0;  

        

        

        while(!aux.empty()) {

            out = *aux.lower_bound((in.first + t)%s);

            aux[in.first]--; 
            if(aux[in.first] <= 0) {
                aux.erase(aux.find(in.first)); 
            }

            for(auto j : aux) {
                cout << j.first << " "; 
            }
            cout << endl;

            total += t; 
            if ((in.first + t)%s > out.first) {
                total += s - ((in.first + t)%s) + out.first; 
            } else {
                total += out.first - ((in.first + t)%s);
            } 
            
            in = out; 

        }

        ans = min(total, ans);
    }

    cout << ans << endl; 
}