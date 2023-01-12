#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[200005];

    cin >> n; 

    map<int, bool> q; 
    map<int, bool> p; 

    int ansq[200005], ansp[200005];
    for(int i=0; i<n; i++){
        q[i+1] = true; 
        p[i+1] = true; 
        ansq[i] = 0; 
        ansp[i] = 0; 
    }

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }


    int where[200005];
    vector<int> faltaq, faltap;
    
    for(int i=0; i<n; i++) {
        if(!q[a[i]] && !p[a[i]]){
            cout << "NO" << endl; 
            return; 
        }

        if(q[a[i]]){
            q[a[i]] = false; 
            where[i] = 1;
            ansq[i] = a[i];
            continue;
        }

        if(p[a[i]]){
            p[a[i]] = false; 
            where[i] = 2;
            ansp[i] = a[i];
            continue;
        }

    } 
    for(auto  i : q){
        if ( i.second) {
            faltaq.push_back(i.first);
        }
    }


    for(auto  i : p){
        if ( i.second) {
            faltap.push_back(i.first);
        }

    }


    for(int i=0; i<n; i++){
        if(ansq[i] == 0) {
            auto pos = lower_bound(faltaq.begin(), faltaq.end(), ansp[i]) ;
            if(pos == faltaq.end()){
                cout << "NO" << endl; 
                return; 
            }
            int res = pos - faltaq.begin();
            ansq[i] = faltaq[res-1];
        }

    }

    for(int i=0; i<n; i++){
        if(ansp[i] == 0) {
            auto pos = lower_bound(faltap.begin(), faltap.end(), ansq[i]);
            if(pos == faltap.end()){
                cout << "NO" << endl; 
                return; 
            }
            int res = pos - faltap.begin();
            ansp[i] = faltap[res-1];
        }

    }

    cout << "YES" << endl; 

    for(int i=0; i<n; i++){
        cout << ansq[i] << " ";
    }
    cout << endl; 

    for(int i=0; i<n; i++){
        cout << ansp[i] << " ";
    }
    cout << endl; 








}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}