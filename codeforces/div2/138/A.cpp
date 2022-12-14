#include <bits/stdc++.h>

using namespace std; 


bool atacadas(vector <pair<int, int>> v, int limit) {
    int atacadas[100][100];
    int posx[] = { 0, 1, 0, -1};
    int posy[] = { 1, 0, -1, 0};

    int n = v.size();

    for(int i=0; i<n; i++) {
        int posax = v[i].first; 
        int posay = v[i].second;
        atacadas[posax][posay] = 2; 
        for(int j=0; j<4; j++){
            while(posax >= 0 && posax < limit && posay >= 0 && posay < limit ){
                atacadas[posax][posay] = 1; 
                posax += posx[j];
                posay += posy[j];
            }
        }
    }

    for(int i=0; i<n; i++){
        
    }

}

void solve() {

    int n, m;
    int a[100][100];
    vector <pair<int, int>> v; 
    int x, y; 

    cin >> n >> m; 

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            a[i][j] = 1;
        }
    }

    for(int i=0; i<m; i++) {
        cin >> x >> y;
        v.push_back( {x, y} );
        a[x][y] = -1; 
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