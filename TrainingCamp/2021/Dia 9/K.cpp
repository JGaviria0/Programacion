#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int a, b, c;
    long long cont = 0;

    cin >> a >> b >> c; 

    cont = c*2; 
    long long aux = min(a,b);
    cont += aux*2; 

    if(a - aux > 0) {
        cont++; 
    } else if(b-aux > 0){
        cont++;
    }

    cout << cont << endl;


    return 0; 
}
