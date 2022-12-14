#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[202][202];

    int posx[] = {-1, 1, -1, 1};
    int posy[] = {-1, 1, 1, -1};

    cin >> n >> m; 

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            cin >> a[i][j];
        }
    }
    int maxi = -1; 
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            int sum = 0; 
            for(int k=0; k<4; k++) {
                int h = i, w= j; 
                while(h >= 1 && h <= n && w>=1 && w<=m) {
                    sum+= a[h][w];
                    h += posx[k]; 
                    w += posy[k]; 
                }
            }
            sum -= 3*a[i][j];
            maxi = max(maxi, sum);
        }
    }

    cout << maxi << endl; 

    
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