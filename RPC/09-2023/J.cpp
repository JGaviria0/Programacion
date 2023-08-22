#include <bits/stdc++.h>

using namespace std; 

int main(){

    int si, se, mi, me; 

    cin >> si >> se >> mi >> me; 

    int check[2000006];

    memset(check, 0, sizeof check); 

    int init = se - si; 

    check[init] = 1; 
    

    for(int i=init; i<2000006; i+= se){
        check[i] = 1; 
        
    }

    init = me - mi; 

    for(int i=init; i<2000006; i+= me){
        if(check[i] == 1){
            cout << i << endl; 
            return 0; 
        }
    }

}