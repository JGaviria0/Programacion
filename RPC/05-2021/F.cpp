#include <bits/stdc++.h>

using namespace std;

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n >> m; 

    int sum = 0; 
    int aux; 

    for(int i=0; i<m; i++) {
        cin >> aux; 
        sum += aux; 
    } 

    cout << fixed << setprecision(4); 

    double ans1 = (sum + (3*(n-m)));
    ans1 /= n; 
    double ans2 = (sum + (-3*(n-m)));
    ans2 /= n;

    cout << ans2 << " " << ans1 << endl; ;    
}