#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n >> m;

    int ans = m - n; 

    if (ans > 0){
        cout << "Dr. Chaz will have "<< ans << (ans > 1 ? " pieces":" piece") <<" of chicken left over!" << endl; 
    } else {
        cout << "Dr. Chaz needs "<< -ans <<" more "<< (-ans > 1 ? " pieces":" piece") << " of chicken!" << endl; 
    }
}