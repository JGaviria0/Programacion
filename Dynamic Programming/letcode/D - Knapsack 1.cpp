/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e5 + 6;
const int oo = 1e9; 
long long cache[102][MAXDATA];
int n, w; 

long long dp(long long val[102][3], int index, int weight){
    // cout << index << " "<< weight << endl; 
    if(weight > w){
        return -oo; 
    }
    if(index == n){
        return 0; 
    }


    if (cache[index][weight] != -1) return cache[index][weight];

    return cache[index][weight] = max(val[index][1] + dp(val, index+1, weight + val[index][0]), dp(val, index+1, weight));
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset(cache,-1, sizeof (cache));

    cin >> n >> w; 

    long long val[102][3];

    for(int i=0; i<n; i++){
        cin >> val[i][0] >> val[i][1];
    }

    cout << dp(val, 0, 0) << endl; 
}