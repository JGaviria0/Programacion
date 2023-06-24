/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const long long oo = 1e9; 

long long memo[100006][4];
map<pair<long long, long long>, long long> redu; 
map<int, vector<long long>> yvalues;
vector<long long> xs; 


long long dp(int i, int y){

    if(xs[i+1] == oo){
        if (yvalues[xs[i]][0] != yvalues[xs[i]][1]){
            return abs(yvalues[xs[i]][0] - yvalues[xs[i]][1]);
        }
        return 0; 
    }

    if(memo[i][y] != -1) return memo[i][y];
   
    // cout << i << " " << y << " "<< abs(xs[i]-xs[i+1]) << " " << abs(yvalues[xs[i]][y] - yvalues[xs[i+1]][0])<< endl; 
    if (yvalues[xs[i]][0] != yvalues[xs[i]][1]){

        return memo[i][y] =  abs(yvalues[xs[i]][0] - yvalues[xs[i]][1]) +min(abs(xs[i]-xs[i+1]) + abs(yvalues[xs[i]][y] - yvalues[xs[i+1]][0]) + dp(i+1, 0), abs(xs[i]-xs[i+1]) + abs(yvalues[xs[i]][y] - yvalues[xs[i+1]][1]) + dp(i+1, 1));
    }
    
    return memo[i][y] = abs(xs[i]-xs[i+1]) + abs(yvalues[xs[i]][y] - yvalues[xs[i+1]][0]) +dp(i+1, 0) + abs(yvalues[xs[i]][0] - yvalues[xs[i]][1]);
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset(memo, -1, sizeof memo);
    int n, m; 
    int x, y; 

    vector<pair<int, int>> v; 

    cin >> n; 
    for(int i=0; i<n; i++){
        cin >> x >> y; 
        v.push_back({x, y});
    }

    v.push_back({oo, oo});

    sort(v.begin(), v.end());
    long long actual = -oo; 
    
    for(int i=0; i<=n; i++){
        if(v[i].first == actual) {
            continue;
        }
        yvalues[v[i].first].push_back(v[i].second);
        xs.push_back(v[i].first);
        // cout << yvalues[v[i].first][0] << endl;
        actual = v[i].first;
        if(i != 0){
            yvalues[v[i-1].first].push_back(v[i-1].second);
        }
    }

    // for(auto a: yvalues){
    //     cout << a.first << " ";
    //     cout << a.second[0] <<" ";
    //     if(a.second.size() > 1){
    //         cout << a.second[1];
    //     }
    //     cout << endl;
    // }

    long long mini = dp(0, 0);  
    // cout << mini << endl; 
    
    long long a = yvalues[xs[0]][0];
    yvalues[xs[0]][0] = yvalues[xs[0]][1];
    yvalues[xs[0]][1] = a; 
    memset(memo, -1, sizeof memo);


    // cout << dp(0,0)<< endl; 

    cout << min(mini,dp(0,0)) << endl; 
}