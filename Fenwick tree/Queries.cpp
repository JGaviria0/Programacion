/*  
https://codeforces.com/gym/100741/problem/A
Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int N, M; 
long long fw[MAXDATA];

void update(int i, int value){
    for(; i<=N; i += (i&(-i))){
        fw[i] += value; 
    }
}

long long query(int pos){
    long long sum = 0;

    
    for(; pos; pos-= (pos&(-pos))){
        sum +=  fw[pos];
    }
    return sum; 
}

long long query(int l, int r){
    cout << query(r) << " " << query(l-1) << endl; 
    return query(r) - query(l-1);
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int a[MAXDATA];
    
    cin >> N >> M; 
    int aux, q, l, r, m; 
    char c;
    for(int i=0; i<N; i++){
        cin >> aux;
        a[i] = aux; 
        update(i+1, aux);
    }

    cin >> q; 
    while (q--){
        cin >> c >> l >> r; 
        
        if(c == 's'){
            cin >> m; 
            cout << query(l, r)%m << endl; 
        }else if (c == '+'){
            update(l, r);
            cout << query(l, l)<< endl; 
        } else {
            update(l, r);
            int newquery = query(l, l); 
            if(newquery<0) {
                update(l, -newquery);
                cout << 0 << endl; 
            } else {
                cout << newquery << endl; 
            }

        }

    }
}