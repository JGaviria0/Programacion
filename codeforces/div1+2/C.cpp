#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    string s1, s2; 

    cin >> s1 >> s2; 

    bool diff = s1[0] != s2[0] ? true : false; 

    for(int i=0; i<s1.size(); i++){
        if(s1[i] == s2[i] && diff){
            cout << "NO" << endl; 
            return; 
        }

        if(s1[i] != s2[i] && !diff){
            cout << "NO" << endl; 
            return; 
        }
    }

    vector<pair<int, int>> ans; 
    
    for(int i=0; i<s1.size(); i++){
        if(s1[i] != '1'){
            ans.push_back({i+1,i+1});
            diff = diff ? false : true;
        }
    }

    cout << "YES" << endl; 

    if(diff){
        ans.push_back({1, s1.size()});
        // cout << 1 << " " << s1.size() << endl; 
    }
    if(!diff) {
        ans.push_back({1, s1.size()/2});
        ans.push_back({s1.size()/2 + 1 , s1.size()});
        // cout << 1 << " " << s1.size()/2 << endl; 
        // cout << s1.size()/2 + 1 << " "<<  s1.size() << endl; 
    }

    cout << ans.size() << endl; ;

    for(int i=0; i<ans.size(); i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }

    

}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}