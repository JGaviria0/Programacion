/*  
https://codeforces.com/contest/12/problem/D
Metodo: Fenwick
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 5e5 + 6;
const int oo = 1e9; 
int fw[MAXDATA];
int N; 
map<int, int> compress; 
map<int, vector<pair<int, int>>> querys; 

void update(int a, int value){
    for(; a<=N; a += a&-a){
        fw[a] = max(fw[a], value); 
    }
}

long long query(int a){

    int maxi = -1; 
    for(; a; a-= a&-a){
        maxi = max(fw[a], maxi);
    }
    return maxi; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int b[MAXDATA], l[MAXDATA], r[MAXDATA]; 

    vector<vector<int> > all; 
    vector<vector<int> > LR; 

    cin >> N; 
    for(int i=0; i<N; i++){
        cin >> b[i];
    }

    for(int i=0; i<N; i++){
        cin >> l[i];
    }

    for(int i=0; i<N; i++){
        cin >> r[i];
        all.push_back({ b[i], l[i], r[i] });
        LR.push_back({l[i], r[i]});
    }

    sort(all.rbegin(), all.rend());
    sort(LR.rbegin(), LR.rend());

    int index = 1; 
    for(int i=0; i<N; i++){
        if (compress[LR[i][0]] == 0){
            compress[LR[i][0]] = index; 
            index++;
        }

        querys[-all[i][0]].push_back({all[i][1], all[i][2]});
    }
    // for(auto c: compress){
    //     cout << c.first << " " << c.second << endl; 
    // }

    // int first, vector<pair<int, int>> second; 
    int cont=0; 
    for(auto q: querys){
        for(int i=0; i<q.second.size(); i++){
            // cout << query(compress[q.second[i].first]-1) << " " << q.second[i].second << endl; 
            if(query(compress[q.second[i].first]-1) > q.second[i].second){
                // cout << "q: " << query(compress[q.second[i].first]-1) << " > " << q.second[i].second << endl; 
                cont++;
            }
        }
        for(int i=0; i<q.second.size(); i++){
            update(compress[q.second[i].first], q.second[i].second);
        }
    }

    cout << cont << endl; 

}