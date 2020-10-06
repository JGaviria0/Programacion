/*  
https://cses.fi/problemset/task/1674
Metodo: Tree 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 
int subor[2000006];
vector<vector<int>> tree(2000006);

int dfs(int u) {
    int ans = 0;

    for(auto i : tree[u]) {
        ans += 1 + dfs(i);
        subor[u] = ans; 
    }
    return ans;
} 

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, padre;  

    cin >> n; 

    for(int i=2; i<=n; i++) {
        cin >> padre;
        tree[padre].push_back(i);
    }
    int hola = dfs(1);

    for(int i =1; i<=n; i++) {
        cout << subor[i] << " "; 
    }
    cout << "\n";
    
}