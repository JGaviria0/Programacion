#include <bits/stdc++.h>

using namespace std; 

int n, d, k; 

int memo[1000][1000];

int MOD = 1000000007;

long long solve(int sum, int maxw){

    if(sum > n){
        return 0; 
    }

    if(sum == n && maxw >= d){
        return 1; 
    }

    if(memo[sum][maxw] != -1) return memo[sum][maxw];

    int suma = 0; 
    for(int i=1; i<=k; i++){
        suma = (suma + solve(sum+i, max(maxw, i)))%MOD;
    }

    return memo[sum][maxw] = suma%MOD; 
}

int main (){

    memset(memo, -1, sizeof memo);
    cin >> n >> k >> d; 

    cout << solve(0, 0) << endl;
}