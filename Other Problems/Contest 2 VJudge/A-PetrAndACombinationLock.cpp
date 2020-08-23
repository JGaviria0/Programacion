#include <bits/stdc++.h>

using namespace std; 

int a[105], n, dp[200][200]; 

int solve(int i, int sum){

    if(sum >= 360) sum = sum - 360;
    if (sum < 0) sum = sum + 360;  

    if(i > n) return 0; 
    if(i == n) if (sum == 0) return 1;

    return solve(i+1, a[i] + sum) + solve(i+1, sum - a[i]); 
}

int main(){

    cin >> n; 

    for(int i=0; i<n; i++)
        cin >> a[i];

    if(solve(0,0) == 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}