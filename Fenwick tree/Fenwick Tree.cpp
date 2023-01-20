/*  
https://open.kattis.com/problems/fenwick
Metodo: fenwick
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 5000006;
const int oo = 1e9; 
long long fw[MAXDATA];
int N; 

void update(int i, long long val){
    for(++i; i<=N; i += (i&(-i))){
        fw[i] += val; 
    }
}

long long query(int i){

    long long sum = 0; 
    for(; i; i-= (i&(-i))){
        sum += fw[i];
    }

    return sum; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int m; 

    cin >> N >> m; 

    while(m--) {
        int ai; 
        long long val; 
        char sign;
        cin >> sign;
        if( sign == '+' ){
            cin >> ai >> val ; 
            update(ai, val);
        } else {
            cin >> val;
            cout << (val == 0 ? 0 : query(val)) << endl; 
        }
    }
}