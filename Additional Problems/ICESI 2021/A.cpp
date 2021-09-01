#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    double v, t, s, d, time; 

    cin >> v >> t >>s >> d; 

    time = d/v; 

    if(time >= t && time <= s) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    

    return 0; 
}
