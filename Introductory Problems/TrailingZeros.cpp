/*  
https://cses.fi/problemset/task/1618
Metodo: Implementacion simple
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, a=0, m=1;
    cin>>n;
    while(m*5<=n){
        m*=5;
        a+=n/m;
    }
    cout<<a<<endl;
}