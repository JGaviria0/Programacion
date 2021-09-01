#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n,m,k,q, a, b; 
    int basura[10003];

    cin>> n >> m >> k >> q; 

    for(int i=0; i<k; i++){
        cin >> a >> b; 
        int aux = (a - 1) * m + b; 
        basura[i] = aux; 
    }


    sort(basura, basura+k); 

    // for(int i=0; i<k; i++){
    //     cout << basura[i] << endl; 
    // }
    

    for(int i=0; i<q; i++){
        cin >> a >> b; 
        int aux = (a - 1) * m + b; 

        int search = lower_bound(basura, basura+k, aux) - basura; 
        // int search = binary_search(basura, basura+k, aux); 

       
        search++;
        // cout << basura[search-1] << "->>" << aux << " -> " << search -1 <<endl;  
        if (basura[search-1] == aux){
            cout << "Waste" << endl;
        } else {
            int ans = (aux - search)%3;
            if (ans == 0){
                cout << "Carrots" << endl;
            } else if (ans == 1) {
                cout << "Kiwis" << endl;
            } else if(ans == 2) {
                cout << "Grapes" << endl;
            }
        }
    }

    return 0; 
}
