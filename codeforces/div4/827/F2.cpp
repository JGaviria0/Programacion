#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    map<char, int> total;  

    int whatstring, num;
    string s;

    int factor = 1; 
    int nspositivos = 0; 
    int nsnegativos = 0; 

    for(int i=0; i<n; i++) {
        
        cin >> whatstring >> num >> s;
        if(whatstring == 1) {
            factor = 1; 
            nspositivos += num; 
        }else {
            nsnegativos += num; 
            factor = -1; 
        }
        for(int j=0; j<s.size(); j++){
            total[s[j]] += factor*num; 

            if (total[s[j]] == 0){
                nsnegativos -= num; 
                nspositivos -= num; 
                auto it = total.find(s[j]);
                total.erase(it);
            }
        }

        if(total.empty()){
            cout << "NO" << endl; 
            continue;
        }

        for(auto &i: total) {
            cout << i.first << " : " << i.second << endl; 
        }

        for(auto &i: total) {
            if(i.second > 0 && nsnegativos == 0){
                cout << "NO" << endl;
                break;
            }

            if(i.second < 0 && nspositivos == 0){
                cout << "YES" << endl;
                break;
            }

            if(i.second < 0){
                cout << "NO" << endl;
                break;
            }

            if(i.second < 0){
                cout << "YES" << endl;
                break;
            }
        }
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