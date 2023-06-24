/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int primos[100] = { 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211};
long long dp[300][300];
int endi; 


long long solve(int i, int last){

    if(primos[i] > endi){
        return 0; 
    }

    if(primos[i] - last > 14){
        return 0; 
    }

    if(primos[i] == endi){
        return 1; 
    }

    if (dp[i][last] != -1) return dp[i][last];
    return dp[i][last] = solve(i+1, primos[i]) + solve(i+1 , last);
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset( dp, -1, sizeof dp);

    cin >> endi; 

    if(endi == 2){
        cout << 1 << endl; 
        return 0;
    }

    cout << solve(0, 2) << endl; 


}