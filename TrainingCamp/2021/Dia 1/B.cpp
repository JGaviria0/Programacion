#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006];
    string s, aux; 

    cin >> n; 
    cin >> s; 
    
    long long mini = inf; 
    for(int i=0; i<n; i++){
        int mas = 10 - (s[i] - '0');
        // cout << mas << endl;
        int j = (i+1)%n; 
        long long ans = 0; 
        while(j != i){
            // cout << (s[j] - '0') << "->" << ((s[j] - '0') + mas)%10 << " " << j << endl; 
            ans = ans * 10 + ((s[j] - '0') + mas)%10;
            j=(j+1)%n;
        }
        if(ans < mini){
            mini = ans; 
        }
    }

    aux = to_string(mini);

    for(int i=0; i<n - aux.length(); i++){
        cout << "0";
    }

    cout << mini << endl; 

    return 0; 
}
