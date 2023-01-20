/*  
https://www.spoj.com/problems/DQUERY/en/
Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 3e4 + 4;
const int oo = 1e9; 

int N; 
vector< map<int, int> > fw(MAXDATA); 

void update(int i, int value){
    for(; i<=N; i+= i&-i){
        fw[i][value]++;
    }
    cout << endl; 
}

map<int, int> query(int a){
    map<int, int> sum; 

    for(; a; a-=a&-a){
        for(auto j: fw[a]){
            sum[j.first] += j.second;
        }
    }

    return sum;
}

int query(int l, int r){
    map<int, int> a = query(r); 
    map<int, int> b = query(l-1); 

    // for(auto j: a){
    //     cout << j.first << " " << j.second << endl;
    // }
    // cout << endl; 

    // for(auto j: b){
    //     cout << j.first << " " << j.second << endl;
    // }
    // cout << endl; 



    int cont = 0; 
    for(auto i: a){
        int index = i.first;
        if(a[index] != b[index]){
            cont++; 
        }
    }
    return cont;
}

void show(){
    for(int i=0; i<=N; i++){
        for(auto j: fw[i]){
            cout << j.first << " " << j.second << endl;
        }
        cout << endl; 
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int  q, a[MAXDATA], l, r; 

    cin >> N; 

    for(int i=0; i<N; i++){
        cin >> a[i];
        update(i+1, a[i]);
    }
    // show();
    cin >> q; 

    while(q--){
        cin >> l >> r; 
        cout << query(l, r) << endl; 
    }
}