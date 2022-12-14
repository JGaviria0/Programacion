#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int n, m; 
    string a[10006];

    cin >> n >> m; 

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int mini = 1e9; 
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            int sum = 0; 
            for(int k=0; k<m; k++) {
                // cout << a[i][k] << " " << a[j][k] << " ";
                int super = a[i][k] - 'a' > a[j][k] - 'a' ? a[i][k] - 'a' : a[j][k] - 'a'; 
                int infe = a[i][k] - 'a' > a[j][k] - 'a' ? a[j][k] - 'a' :a[i][k] - 'a' ;
                // cout << super << " " << infe;  
                int upper = abs ((int)super - (int)infe) ; 
                // int downer = abs ((int)infe + (int)(('z' - 'a') - super)) + 1; 
                
                // cout << " minimo= " << upper << endl;
                sum += upper;
            }
            mini = min(mini, sum); 
            // cout << mini << endl; 
        }
    }

    cout << mini << endl; 
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