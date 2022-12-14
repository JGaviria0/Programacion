#include <bits/stdc++.h>

using namespace std; 

void printmap(map<int, int>mp) {

    cout << "inicio mapa" << endl; 
    for(auto &i: mp) {
        cout << i.first << " : " << i.second << endl; 
    }
    cout << "Fin mapa" << endl; 
}

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    int d, k; 
    char c; 

    map <int, int> mp;
    priority_queue<int> pq;
    int multifactor = 1; 

    for(int i=0; i<n; i++) {
        printmap(mp);
        if(!pq.empty()) {
            cout << "tope : " << pq.top() << endl; 
        } else {
            cout << "pq vacia" << endl;
        }

        cin >> d >> k >> c;

        if(d == 1) {
            multifactor = 1;
        } else {
            multifactor = -1;
        }

        int letterid = (c - 'a') * -1;
        cout << c << " letter id " << letterid << endl; 

        mp[letterid] += (multifactor*k);

        if (mp[letterid] != 0) {
           pq.push( letterid ); 
        }

        while(!pq.empty() || pq.top() != 0) {
            pq.pop();
        }


        if(!pq.empty() && mp[pq.top()] < 0) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl ;
        }
    }
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