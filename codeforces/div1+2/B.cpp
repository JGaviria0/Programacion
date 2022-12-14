#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m, a[1000006];

    cin >> n; 

    string s; 

    cin >> s; 

    long long max1 = -1; 
    long long max0 = -1; 
    long long total1 = 0; 
    long long total0 = 0; 

    long long index = 0; 
    long long j = 0; 

    bool swit = s[0] != '0' ? true: false; 

    // s+= 8; 

    for(int i=0; i<s.size(); i++){
        // cout << index << " " << j << " " << s[i] << endl; 
        if(s[i] == '0') {
            total0++; 
        }

        if(s[i] == '1') {
            total1++; 
        }
    }

    while(index < n && j < n ){
        if(swit) {
            if(s[j] == '1') {
                j++; 
            } else {
                swit = false; 
                max1 = max (max1, abs(index - j)); 
                index = j; 
            }
        } else {
            if(s[index] == '0'){
                index++;
            } else {
                swit = true; 
                max0 = max (max0, abs(index - j)); 
                j = index; 
            }
        }
    }

    if(swit) {
        max1 = max (max1, abs(index - j)); 
    } else {
        max0 = max (max0, abs(index - j)); 
    }

    // cout << max1 << " " << max0 << endl; 

    cout << max( { max1*max1, max0*max0, total0*total1}) << endl; 


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