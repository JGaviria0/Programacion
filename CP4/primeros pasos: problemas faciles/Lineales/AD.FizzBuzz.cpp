#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, a, b; 

    cin >> a >> b >> n; 

    for(int i=1; i<=n; i++){

        bool flag = false;
        if (i%a == 0){
            cout << "Fizz"; flag = true;
        }

        if (i%b == 0){
            cout << "Buzz"; flag = true;
        }

        if(!flag){
            cout << i;
        }
        cout << endl; 
    }

    
}