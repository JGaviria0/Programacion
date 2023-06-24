#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int n, m; 

long long dp(int i, int j){
    if(i == n){

    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    vector<pair<int, vector<int>>> v; 
    cin >> n, m; 

    long long memo[n][m]; 

    memset(memo, -1, sizeof dp);

    for(int i=1; i<=n; i++){
        int aux; 
        vector<int> aux2; 
        cin >> aux; 

        for(int i=0; i<min(m, n-i+1); i++){
            int aux3; 
            cin >>aux; 
            aux2.push_back(aux3);
        }

        v.push_back({aux, aux2});
    }

}