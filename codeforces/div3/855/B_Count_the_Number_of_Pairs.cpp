/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

void solve() {

    int n, a[MAXDATA], k; 

    cin >> n >> k; 
    map<char, int> dic; 
    string s; 
    cin >> s; 

    for(int i=0; i<n; i++) {
        dic[s[i]]++; 
    }
    int sum = 0; 
    int res = 0; 
    for (auto a : dic){
        int pos = 0;  
        if (int(a.first) > 96){
            pos = (a.first -'a');
        }else {
            pos = (a.first - 'A');
        }
        
        int mini = min(dic[char('A' + pos)], dic[char('a' + pos)]);
        sum += mini; 
        // cout << char('A' + pos) << endl; 
        res += (max(dic[char('A' + pos)], dic[char('a' + pos)]) - mini)/2; 
        dic[char('A' + pos)] = 0;
        dic[char('a' + pos)] = 0;
    }

    cout << sum + min(res, k) << endl; 
}

// aAaaBACacbE
// aABACacb
// aaE

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}