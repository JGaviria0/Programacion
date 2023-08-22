#include <bits/stdc++.h> 

using namespace std; 
const int MAX_DATA = 5005;
const int oo = 1e9; 
vector<pair<int, int>> teachers; 
int N; 
long long memo[MAX_DATA][MAX_DATA];

long long solve(int i, int lectures, string s){
    // cout << i << " " << lectures << endl; 
    if(lectures == 0){
        // cout << endl << endl << s << endl; 
        return 0; 
    }

    if(lectures < 0) {
        return oo;
    }

    if(i >= N){
        return oo; 
    }

    // if(memo[i][lectures] != -1) return memo[i][lectures];

    int next; 

    if(teachers[i].second == -1) next = 3; 
    if(teachers[i].second == -2) next = 2; 
    if(teachers[i].second == -3) next = 1; 

    return  min(teachers[i].first + solve(i+next, lectures+teachers[i].second, s + to_string(i)), solve(i+1, lectures, s));
}



int main(){

    ios::sync_with_stdio(0);
	cin.tie(0);

    int l, t; 

    cin >> l >> t; 

    N = t*3;

    memset(memo, -1, sizeof memo);

    int aux; 
    for(int i=0; i<t; i++){
        cin >> aux; 
        teachers.push_back({aux, -1});
        cin >> aux; 
        teachers.push_back({aux, -2});
        cin >> aux; 
        teachers.push_back({aux, -3});
    }

    cout << solve(0, l, "") << endl; 
}