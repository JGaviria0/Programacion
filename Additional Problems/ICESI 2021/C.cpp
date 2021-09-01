#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, sum, aux; ; 


    cin >> n; 
    int cont = 0; 
    while(n--) {
        sum = 0; 
        cin >> aux; sum += aux; 
        cin >> aux; sum += aux; 
        cin >> aux; sum += aux; 

        if(sum >= 2) {
            cont++; 
        }
    }

    cout << cont << endl;


    return 0; 
}
