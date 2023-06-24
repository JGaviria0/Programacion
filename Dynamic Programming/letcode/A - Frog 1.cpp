/*  
https://leetcode.com/problems/unique-paths/
Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int cache[MAXDATA];


int dp(int x, int a[], int n){
    if(x >= n){
        return oo;
    }

    if(x == n-1){
        return 0;
    }

    if(cache[x] != -1) return cache[x];
    
    return cache[x] = min(abs(a[x] - a[x+1]) + dp(x+1, a, n), 
                          abs(a[x] - a[x+2]) + dp(x+2, a, n));
}   



int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m, a[MAXDATA]; 
    memset(cache,-1, sizeof (cache));


    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cache[n-1]  = 0;
    dp(0, a, n);

    cout << cache[0] << endl;
    
}