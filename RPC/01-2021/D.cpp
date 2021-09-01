#include <bits/stdc++.h>

using namespace std; 

int main () {
    int fibo[1000006];
    int n, t; 

    int a = 0; 
    int b = 1;
    int c; 

    for(int i=0; i<10001; i++) {
        fibo[i] = a%2147483647;
        c = b+a;
        a = b;
        b = c;
    }

    cin >> t; 

    while(t--) {
        cin >> n;
        int * f = find(fibo, fibo+10001, n);
        if (f != fibo+10001) {
            cout << "YES";
        } else {
            cout << "NO";
        }
        cout << endl;
    }
}