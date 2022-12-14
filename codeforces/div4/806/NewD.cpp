    #include <bits/stdc++.h>
     
    using namespace std; 
     
    void solve() {
     
        int n , a[100005]; 
     
        string s; 
        map<string, int> m; 
        map<string, int> res; 
        // string ns[100005]; 
        
        cin >> n; 
        vector<string>ns(n+1); 
     
        int ans[100005];
     
        for(int i=1; i<=n; i++) {
            cin >> s; 
            ns[i] = s; 
            m[s] = i; 
            ans[i] = 0; 
        }
     
        int pos = 0; 
     
        for( int j=1; j<=n; j++) {
            if (res[ns[j]] == 1) {
                cout << 1; 
                continue;
            }
            bool ok = false; 
            for(int k=0; k<ns[j].size()-1; k++) {
                if(m[(ns[j]).substr(0,k+1)] != 0 ) {
                    if(m[(ns[j]).substr(k+1)] != 0 ) {
                        // cout << ns[j] << " = " << (ns[j]).substr(0,k+1) << " " << (ns[j]).substr(k+1, ns[j].size() - k - 1) << endl; 
                        res[ns[j]] = 1; 
                        ok = true; 
                        cout << 1; 
                        break; 
                    }
                }
            }
            if(!ok) {
                cout << 0; 
            }
        }
     
        cout << endl;     
    }
     
    int main() {
     
        int t, n; 
        ios::sync_with_stdio(0); cin.tie(0);
     
        cin >> t; 
     
        while(t--) {
            solve();
        }
    }