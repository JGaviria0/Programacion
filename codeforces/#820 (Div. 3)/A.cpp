#include<bits/stdc++.h>

using namespace std; 

int main() {

    int a, b, c, t; 

    cin >> t; 

    while(t--) {
        cin >> a >> b >> c;     
        int pa = 2; 
        int to = b; 

        if (b > c) {
            pa = 1; 
            to = c; 
        }

        int up = abs(c-b)*pa + to - 1;

        // cout << up << " " << a-1 << endl;

        if(a-1 > up) {
            cout << "2" << endl; 
            continue;
        }

        if(a-1 < up) {
            cout << "1" << endl; 
            continue;
        }

        cout << "3" << endl; 
    }
}