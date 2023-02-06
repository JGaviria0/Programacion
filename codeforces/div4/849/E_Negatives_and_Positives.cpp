/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    long long n, a[MAXDATA]; 
                        //int, pos
    priority_queue<pair<int, int>> pq; 

    cin >> n; 
    long long sum = 0; 
    long long contneg = 0; 
    long long mini = oo; 
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        if(a[i] <= 0){
            mini = min(-a[i], mini);
            contneg++; 
            sum += -a[i];
        } else {
            mini = min(a[i], mini);
            sum += a[i];
        }
    }

    // cout << sum << " " << mini << endl ;

    if(contneg%2 != 0){
        sum -= mini*2; 
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