/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 2e5 + 5;
const int oo = 1e9; 

int sumdig(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10; 
        n/=10; 
    }

    return sum; 
}

void solve() {

    int n, aux, q; 
    set<int> v; 

    cin >> n >> q; 
    vector<int> fini(n); 


    for(int i=0; i<n; i++) {
        cin >> fini[i];
        if(fini[i]>9) v.insert(i); 
    }
    int a, b, c; 
    while(q--){
        cin >> a >> b;
        if(a == 1){
            cin >> c; 
            --b; --c; 
            int last = b; 
            // cout << "TYPE 1: " << endl;
            while(!v.empty()){
                auto pun = v.lower_bound(last);
                // int pos = pun - v.begin();
                // cout << pos << " " << v[pos] << endl; 
                if(*pun > c || pun == v.end()){
                    break; 
                }
                fini[*pun] = sumdig(fini[*pun]);
                int ai = *pun;
                if(fini[ai] < 10) v.erase(pun);

                last = ai + 1; 
            }  
        } else {
            --b; 
            cout << fini[b] << endl; 
        }
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    cout.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}