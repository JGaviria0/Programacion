#include<bits/stdc++.h>

using namespace std;

int main() {
    int a, b,i=1; 

    while(cin >> a >> b && a != 0 && b != 0) {
        int ans = ceil(sqrt(a*a+b*b)); 
        cout << "Caso #" << i << ": " << ans << endl;
        i++; 
    }
}