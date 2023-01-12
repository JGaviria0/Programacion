#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    double a, b; 

    int n ;
    cin >> n;
    double sum = 0;
    while(n--){
        cin >> a >> b; 
        sum += a*b; 

    }

    cout << sum << endl; 
}