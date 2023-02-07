/*  
https://atcoder.jp/contests/dp/tasks/dp_b
Metodo: DP
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e5 + 6;
const int oo = 1e9; 
long long cache[MAXDATA];


long long dp(int x, long long a[], int n, int k){

    if(x > n){
        return oo;
    }

    if(x == n-1){
        return 0; 
    }

    if(cache[x] != -1) return cache[x];
    long long mini = oo;
    for(int i=1; i<=k; i++){
        long long aux = abs(a[x] - a[x+i]) + dp(x+i, a, n, k);
        mini = min(aux, mini);
    }

    return cache[x] = mini;
}   



int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, k; 
    long long a[MAXDATA]; 
    memset(cache,-1, sizeof (cache));


    cin >> n >> k; 

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    cache[n-1]  = 0;
    dp(0, a, n, k);

    cout << cache[0] << endl;
    
}