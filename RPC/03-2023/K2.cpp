/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 2e6 + 6;
const int oo = 1e9;
vector<pair<int,int>> points;

int dp[MAXDATA];
void solve() {

    int n, a[MAXDATA]; 

    cin >> n; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset(dp, -1, sizeof dp);
    int n, x,y; 
    cin >> n; 

    while(n--) {
        cin>>x>>y;
        points.push_back({x,y});
    }
}