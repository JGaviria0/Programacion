#include<bits/stdc++.h>

using namespace std; 

int main() {

    int a, b, c, t; 

    cin >> t; 

    while(t--) {
        int n; 
        string s; 

        cin >> n; 
        cin >> s; 

        string ans = ""; 

        for(int i=n-1; i>=0; i--) {
            if(s[i] == '0') {
                int num;
                // cout << (s[i-2] - '0') << s[i-1] - '0' << endl; 
                num = ((s[i-2] - '0')*10 + (s[i-1] - '0') )+ 96;
                ans = char(num) + ans;
                i-=2; 
            } else {
                ans =  char((s[i] - '0')+ 96) + ans; 
            }
        }  

        cout << ans << endl;  
        
    }
}