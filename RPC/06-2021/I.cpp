#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

string substr2(string s) {
    int i =1; 
    string n = ""; 
    while(s[s.length() - i] == 0){
        i++; 
        n = n + '0';
    }

    while(s[s.length() - i] == 9 && s.length() > i ){
        i++; 
        n = n + '0';
    }
    n = n + '0';

    if (s.length() - i - 1 ){
        return '1' + n; 
    }
    cout << i << " " << s.length() << endl;

    int valorA = (s[s.length()-i] - '0');
    cout << s.substr(0, s.length() - i-1)  <<  char((s[s.length()-i-1] + 1)%9) <<  n; 

    return s.substr(0, s.length() - i -1) + char((s[s.length()-i-1] + 1)%9) + n; 

}

int dp(string s, int n) {
    if(s.empty()) return 0; 

    int valorA = (s[s.length()-1] - '0');
    string newstringL = s.substr(0,s.length()-1) + "0";
    string newstringR = substr2(s.substr(0,s.length()-1));


    cout << newstringL << " - >" << newstringR << endl;


    return dp(newstringL, n+valorA) + dp(newstringR, n+10-valorA);
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[2000006];
    string s ;

    // cin >> s; 

    // cout << dp(s, n) << endl;
    substr2("99999998");
    return 0; 
}
