#include<bits/stdc++.h>

using namespace std;

int MOD = 1000007; 

int main () {
    long long n, m;
    long long pascal[1008], sumapascal[1008];  
    long long cont =1; 

    pascal[1] = 1;
    pascal[0] = 0; 

    for(int i=1; i<=1005; i++) {
        pascal[i+1] =  pascal[i] * 2 %MOD;  
    }

    sumapascal[0] = 0; 

    for(int i =1; i<=1005; i++) {
        sumapascal[i] = (sumapascal[i-1] + pascal[i])%MOD;  
    }

    while(cin >> n >> m && n!=-1 && m!=-1) {
        if(n > m) {
            int x = n; 
            n = m; 
            m = x; 
        }
        cout << (sumapascal[m+1] - sumapascal[n] + MOD)%MOD << endl; 
    }
}