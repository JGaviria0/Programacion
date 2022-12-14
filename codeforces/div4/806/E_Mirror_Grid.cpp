#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m;

    string s[1006];

    cin >> n; 

    for(int i=0; i<n; i++) {
            cin >> s[i]; 
    }


    bool par = false; 

    if (n%2 == 0) {
        par = true; 
    }


    string clone[6][106][106];
    int posactual = n/2;
    if (!par) {
        posactual++; 
    }
    int posx[] = { 0, 0, posactual, posactual};
    int posy[] = { 0, posactual, 0, posactual};

    for( int part = 0; part<4; part++) {
        for(int i=0; i<n/2; i++) {
            for(int j=0; j<n/2; j++) {
                // cout << s[posx[part] + i][posy[part] + j] << " "; 
                clone[part][i][j]= s[posx[part] + i][posy[part] + j];
            }
            // cout << endl ;
        }
    }
    int rev = n/2 - 1; 
    cout << rev << endl; 
    int revx[] = { 0, 0, rev, rev};
    int revy[] = { 0, rev, 0, rev};

    int ans = 0; 
    for(int i=0; i<n/2; i++) {
        for(int j=0; j<n/2; j++) {
            int unos = 0; int ceros = 0; 
            for( int part = 0; part<4; part++) {

                cout <<  i- revx[part]  << " " << revy[part] -j << endl; 
                // if(clone[part][revx[part] - i][revy[part] -j] == "1") {
                //     unos++; 
                // }

                // if(clone[part][revx[part] - i][revy[part] -j] == "0") {
                //     ceros++; 
                // }
            }
            cout << endl; 
            // ans += min(unos, ceros);
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