#include <bits/stdc++.h>

using namespace std; 



int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m, t; 

    cin >> t; 

    vector <pair <int, char>> v; 

    int letter = 'A';
    int total = 0; 
    for(int j=0; j<t; j++) {
        cin >> n;   
        total += n;
        for(int i=0; i<n; i++) {
            cin >> m; 
            v.push_back({ m, char(letter) });
        }
        letter++;
    }

    sort(v.begin(), v.end());

    for(int i=0; i<total; i++) {
        cout << v[i].second;
    }

    cout << endl;
} 