#include <bits/stdc++.h>

using namespace std; 
const int oo = 1e9; 

int maxi = -1; 

int dp[1003][100005];

int  solve(int n, int m, int books[], int pages[], int i) {


    if(i >= n) return 0; 
    if(m <0 ) return 0; 

    int &ans = dp[i][m];

    if(ans != -1) return ans; 

    if( m - books[i] >= 0){
        return ans = max(pages[i] + solve(n, m - books[i], books, pages, i+1), solve(n, m, books, pages, i+1));
    }

    return ans = solve(n, m, books, pages, i+1);

}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);

    memset(dp, -1, sizeof dp);
    
    int n, m; 

    cin >> n  >> m; 
    int books[1000006], pages[1000006];
    for(int i=0; i<n; i++){
        cin >> books[i];
    }
    for(int i=0; i<n; i++){
        cin >> pages[i];
    }

    cout << solve(n, m, books, pages, 0) << endl; 
}