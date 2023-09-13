/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9;
const int MOD = 1e6;
int memo[1003][1003]; 

int solve(int n, int k) {

    if (k == 1) return 1; 

    if(memo[n][k] != -1) return memo[n][k]; 
    
    int sum = 0; 
    for(int i=0; i<=n; i++){
        sum = (sum+(solve(n-i, k-1)))%MOD; 
    }

    return memo[n][k] = sum; 


}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    memset(memo, -1, sizeof memo); 
    
    int a, b; 

    while(cin >> a >> b && a != 0 && b != 0){
        cout << solve(a, b) << endl; 
    }
}
