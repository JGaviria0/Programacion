/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA]; 

    priority_queue< int > pq; 

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    long long sum = 0; 
    for(int i=0; i<n; i++) {

        if(a[i] != 0){
            pq.push(a[i]);
        } else {
            if(!pq.empty()){
                sum += pq.top();
                pq.pop();
            }
        }   
    }

    cout << sum << endl; 
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