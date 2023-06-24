/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int memo[10000006];
int N; 
int A[10000006];

int dp(int k){
    
    if(k >= N ){
        return 0; 
    }
    int mini = oo; 
    for(int i=0; i<N; i++){
        mini = min(mini, A[i] + dp(k-i)); 
    }

    return mini;  
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);

    memset(dp, -1, sizeof dp);

    cin >> N; 

    for(int i=0; i<N; i++){
        cin >> A[i];
    }


    cout << dp(0) << endl; 


}