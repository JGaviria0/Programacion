/*
https://cses.fi/problemset/task/1633  
Metodo: DP(Iterativo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

const int limit = 1e6;
long long vec[limit];

int main (){

    long long n, k;
    cin >> n;
    
    vec[0] = 1;                

    for(int i=1; i<=n; i++)
    { 
        if (i<7)
            k= i;
        else
            k = 6;
            
        for(int j=1; j<=k; j++)
        {
            vec[i] = (vec[i] + vec[i-j])%((int)1e9 + 7);
        }
    }
    cout << vec[n] << endl;
}