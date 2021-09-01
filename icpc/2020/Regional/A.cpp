#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, cont, ans = 0, gen=0;
    string s; 

    cin >> n; 

    cin >> s; 
    char aux;
    aux = s[s.length()-2];
    cont = (aux - '0') * 10;
    aux = s[s.length()-1];
    cont += (aux - '0');
    gen += cont; 

    for(int i=0; i<n; i++){
        cin >> s; 
        char aux;
        aux = s[s.length()-2];
        cont = (aux - '0') * 10;
        aux = s[s.length()-1];
        cont += (aux - '0');
        gen += cont;
        if(gen%100 != 0 ){
            ans++; 
        }
    }

    cout << ans<< endl; 

    return 0; 
}
