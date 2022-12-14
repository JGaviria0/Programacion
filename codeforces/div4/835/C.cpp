#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    priority_queue<int> p; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
        p.push(a[i]);

    }

    int maxi = p.top();
    p.pop(); 

    int casimaxi = p.top();
    p.pop(); 

    // cout << maxi << casimaxi << endl; 

    for(int i=0; i<n; i++) {
        

        if(a[i] == maxi){
            cout << a[i] - casimaxi<< " "; 
            continue;
        }

        cout << a[i] - maxi << " "; 
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