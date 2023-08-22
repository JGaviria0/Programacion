#include<bits/stdc++.h> 

using namespace std; 

int main() {

    string s1, s2; 

    cin >> s1 >>s2; 
    int n = s1.size();
    int m = s2.size();
    if(n < m) {
        for(int i=0; i<m-n; i++){
            s1 = "0"+s1;
        }
    } else {
        for(int i=0; i<n-m; i++){
            s2 = "0"+s2;
        }
    }
    // cout << s1 << endl << s2; 

    n = s1.size();

    for(int i=0; i<n; i++){
        // cout << (s1[i] - '0') << endl; 
        if((s1[i] - '0') <= 2 && (s2[i] - '0') <= 2){
            cout << 0;
            continue; 
        }

        if((s1[i] - '0') >= 7 && (s2[i] - '0') >= 7){
            cout << 0;
            continue; 
        }

        cout << 9; 
    }

    cout << endl; 

}