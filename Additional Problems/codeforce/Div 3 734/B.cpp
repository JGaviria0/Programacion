#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    string s; 

    cin >> t ; 

    while(t--) {
        map <char, int> red; 
        map <char, int> green; 
        cin >> s; 
        int res = s.length()/2;
        int ans = 0, ans2 = 0; 
        bool swit = true; 
        for(int i=0; i<s.length(); i++){
            if(swit){
                if(red[s[i]] == 0){
                    //cout << "red" << endl;
                    ans++;
                    red[s[i]]++;
                    swit = false; 
                } else if (green[s[i]] == 0) {
                    //cout << "green" << endl;
                    green[s[i]]++;
                    ans2++; 
                } 
            } else {
                if(green[s[i]] == 0){
                    //cout << "green" << endl;
                    ans2++;
                    green[s[i]]++;
                    swit = true; 
                } else if (red[s[i]] == 0) {
                    //cout << "red" << endl;
                    red[s[i]]++;
                    ans++; 
                } 
            }  
        }
        cout << min(ans, ans2) << endl;
    }



    return 0; 
}
