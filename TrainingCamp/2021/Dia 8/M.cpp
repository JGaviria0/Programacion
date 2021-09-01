#include <bits/stdc++.h>

using namespace std; 
bool dp[1003][1003];
const int inf = 10000007;
string res = ""; 

void solve(string s,int i,int j, int n, int k, string ans){

    if(i > n) return; 
    if(j > k || j < -k) return; 

    if(i == n && j == k){
        res = ans; 
        return; 
    }

    if(s[i] == '?'){
        solve(s, i+1, j+1, n, k, ans + "W");
        solve(s, i+1, j-1, n, k, ans + "L");
        solve(s, i+1, j, n,k, ans + "D");
    } else {
        if(s[i] == 'W'){
            solve(s, i+1, j+1, n, k, ans + "W");
        } else if (s[i] == 'D'){
            solve(s, i+1, j, n,k, ans + "D");
        } else {
            solve(s, i+1, j-1, n,k, ans + "L");
        }
    }
}


int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006], k; 
    string s; 

    memset(dp, false, sizeof dp);

    cin >> n >> k; 
    cin >> s; 

    // dp[0][0] = true; 

    // for(int i=0; i<n; i++){
    //     for(int j = -k + 1; j<k; j++){
    //         if(dp[i][j]){
    //             if(s[i] == 'W'){
    //                 dp[i+1][j+1] = true; 
    //             } else if (s[i] == 'D'){
    //                 dp[i+1][j] = true;
    //             } else if (s[i] == 'L'){
    //                 dp[i+1][j-1] = true;
    //             } else {
    //                 dp[i+1][j+1] = true; 
    //                 dp[i+1][j] = true; 
    //                 dp[i+1][j-1] = true; 
    //             }
    //         }
    //     }
    // }

    // for(int i=0; i<n; i++){
    //     for(int j = -k + 1; j<k; j++){
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // recostruccion(s,0,0,n,k); 

    solve(s,0,0,n,k,"");


    if (res == ""){
        cout << "no" << endl;
    } else {
        cout << res << endl;
    }

    return 0; 
}
