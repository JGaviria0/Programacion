#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int x, y; 

    cin >> x >> y; 

    if(x > 0 && y > 0){
        cout << 1 << endl; 
        return 0; 
    }

    if(x < 0 && y > 0){
        cout << 2 << endl; 
        return 0; 
    }

    if(x > 0 && y < 0){
        cout << 4 << endl; 
        return 0; 
    }

    cout << 3 << endl; 
}