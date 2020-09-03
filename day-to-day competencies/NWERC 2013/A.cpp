#include <bits/stdc++.h>

using namespace std; 

int mcd (int a, int b){
    if (b == 0) return a;
    mcd(b , a%b);  

}

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    long long a, b, c, aux, deno, aux2; 

    while(cin >> a >> b >> c){
        aux = c - b;
        deno = b*a; 

        if(deno>aux) {
            a = deno; 
            b = aux; 
        } else {
            a = aux; 
            b = deno; 
        }

        aux2 = mcd(a,b); 

        cout << deno / aux2<<"/" << aux/ aux2 << endl; 
    }
}