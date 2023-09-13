/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 3e3 + 6;
const int oo = 1e9; 

string n, m; 
vector<vector<pair<int, string>>>memo(MAXDATA,vector<pair<int, string>>(MAXDATA)); 


pair<int, string> solve(int i, int j) {

    if(i >= n.size() || j >= m.size()){
        return {0, ""}; 
    }

    if(memo[i][j].first != -1) return memo[i][j]; 


    if(n[i] == m[j]){
        pair<int, string> aux = solve(i+1, j+1); 
        return memo[i][j] ={aux.first + 1, n[i] + aux.second}; 
    }

    pair<int, string> first = solve(i+1, j); 
    pair<int, string> second = solve(i, j+1); 

    if(first.first > second.first){
        return memo[i][j] = first; 
    } 

    return memo[i][j] = second; 
}

int main() {
    
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i=0; i<MAXDATA; i++){
        for(int j=0; j<MAXDATA; j++){
            memo[i][j] = {-1, ""}; 
        }
    }

    cin >> n >> m;  
    pair<int, string> res = solve(0,0) ; 
    cout << res.second << endl ;
} 