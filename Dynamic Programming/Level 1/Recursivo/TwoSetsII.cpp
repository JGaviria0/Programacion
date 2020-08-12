/*  
https://cses.fi/problemset/task/1093
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int dp[505][200005], n, cont = 0;
int MOD = 1e9 + 7;

long long powt(long long a, long long b){
    a%=MOD;
    long long res = 1; 
    while(b>0){
        if(b & 1)
            res = res*a%MOD;
        
        a = a*a%MOD; 
        b >>=1;  
    }
    return res; 
}


int solve(int i, long long sum){

    if (i>n+1) return 0;

    if (sum > cont/2) return 0; 

    if(sum == cont/2) return 1;  

    int &ans = dp[i][sum];

    if(ans != -1) return ans;

    ans = (solve(i+1, sum + i) + solve(i+1, sum))%MOD;

    return ans;
}

int main (){

    memset(dp, -1, sizeof dp);

    cin >> n;  
    cont = n*(n+1)/2; 

    
    if (cont%2 == 0)
        cout << solve(1,0)*powt(2,MOD-2)%MOD<< endl; 
    else 
        cout << "0" << endl; 
}