/*  
https://www.spoj.com/problems/AKVQLD03/
Metodo: fenwick
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9;

int N; 
long long fw[MAXDATA];

void update(int i, long long value){

    for(; i<=N; i+= i&-i){
        fw[i] += value; 
    }
}

long long query(int a){
    long long sum =0; 
    for(; a; a -= a&-a){
        sum += fw[a];
    }
    return sum; 
}

long long query(int l, int r){
    return query(r)- query(l-1); 
}

// void show(){

//     for(int i=0; i<=N; i++){

//     }
// }

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int q, a, b; 
    string s;  

    cin >> N >> q; 

    while(q--) {
        cin >> s >> a >> b; 

        if(s == "find"){
            cout << query(a, b) << endl; 
        }else {
            update(a, b);
        }
    }
}