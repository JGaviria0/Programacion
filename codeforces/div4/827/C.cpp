#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m;
    char a[100][100];
    string nothing;

    getline(cin, nothing);

    for(int i=0; i<8; i++) {
        for(int j=0; j<8; j++) {
            cin >> a[i][j]; 
        }
    }
    bool flag = true; 
    for(int i=0; i<8; i++) {
        if (a[i][0] == 'R') {
            for(int j=0; j<8; j++) {
                if(a[i][j] != 'R') {
                    break;
                }
                if(a[i][j] == 'R' && j == 7) {
                    cout << "R" << endl; 
                    return; 
                } 
            }

        }

        if (a[0][i] == 'B') {
            for(int j=0; j<8; j++) {
                if(a[j][i] != 'B') {
                    break;
                }
                if(a[j][i] == 'B' && j == 7) {
                    cout << "B" << endl; 
                    return; 
                } 
            }

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