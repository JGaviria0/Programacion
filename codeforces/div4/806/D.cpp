#include <bits/stdc++.h>

using namespace std; 

void solve() {

         
}

int main() {

    int t; 
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> t; 

    while(t--) {
        int n;
        map<string, int> m; 
        // string ns[100005]; 
        
        cin >> n; 
        vector<string> ns(n); 

        for(int i=0; i<n; i++) {
            cin >> ns[i];
            m[ns[i]] = 1; 
        }

        for( int j=0; j<n; j++) {
            bool ok = false; 
            for(int k=0; k<ns[j].length(); k++) {
                string firstt = ns[j].substr(0,k+1); 
                string secondd = ns[j].substr(k+1); 

                ok |= (m[firstt] && m[secondd]);

            }
            cout << (int)ok; 
        }

        cout << endl;
    }
}