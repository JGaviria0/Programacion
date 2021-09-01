#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int sumaX(char c){
    if (c == 'R'){
        return 1;
    } else if (c == 'L') {
        return -1; 
    } else {
        return 0; 
    }
}

int sumaY(char c){
    if (c == 'U'){
        return 1;
    } else if (c == 'D') {
        return -1; 
    } else {
        return 0; 
    }
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;

    string s;  
    cin >> n;
    cin >> s; 
    int x =0, y =0, cont = 0; 
    int ans = 0; 
    for(int i=0; i<n; i++){
        cont++;
        x += sumaX(s[i]); 
        y += sumaY(s[i]); 
        if (x == 0 && y == 0){
            ans = cont; 
        }
    }

    cout << ans << endl;


    return 0; 
}
