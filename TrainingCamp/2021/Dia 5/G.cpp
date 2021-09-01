#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int r, g; 
    long long gaus[1000006]; 

    cin >> r >> g; 

    if (r < g) {
        swap(r,g); 
    }
    
    gaus[0] = 0;
    int n =  100001;
    for(int i=1; i<n; i++) {
        gaus[i] = i+ gaus[i-1];
    }

    int sum = r+g; 
    int pos = lower_bound(gaus, gaus+n, sum) - gaus; 

    if(gaus[pos] != sum){
        pos--;
    }

    cout << pos << endl;



    return 0; 
}
