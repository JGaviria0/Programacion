/*  
https://atcoder.jp/contests/dp/tasks/dp_e
Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e5 + 6;
const int oo = 1e9; 
long long cache[102][100005];
int n, w; 
long long val[102][3];


long long dp(int index,  int value){
    // cout << index << " "<< weight << endl; 

    if(index == n){
        return 0; 
    }

    if (cache[index][value] != -1) return cache[index][value];

    // return cache[index][value] = min(val[index][0] + dp( index+1, weight + val[index][0], value + val[index][1] ), dp( index+1, weight, value));
    return cache[index][value] = min(val[index][0] + dp(index+1, value + val[index][1]), dp( index+1, value));
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset(cache,-1, sizeof (cache));

    cin >> n >> w; 


    for(int i=0; i<n; i++){
        cin >> val[i][0] >> val[i][1];
    }

    cout << dp(0,0) << endl; 
}