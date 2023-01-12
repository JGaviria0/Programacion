#include <bits/stdc++.h>

using namespace std; 

void printa( int presum[], int n){

    for(int i=0; i<n; i++){
        cout << presum[i+1] << " ";
    }
}

void solve() {

    int n, k, a[100006], afix[100006], presum[100006];

    cin >> n >> k; 

    afix[0] = 0;
    presum[0] = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        afix[i+1] = 0;
        presum[i+1] = 0;
    }

    int cont = 0; 

    for(int i=1; i<=n; i++) {
        printa(presum, n);
        cout << " -> " << a[i-1] << " y " << i << endl;
        if (a[i-1] > i){
            cont++;
            afix[i] = 1; 
        } else if( i - a[i-1]  != presum[i] - presum[a[i-1]] + 1){
            afix[i] = 1; 
            cont++;
        } else {
            afix[i] = 1;
        }

        presum[i] = presum[i-1] + afix[i];
    }

    cout << "CONT " << cont << endl; 
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