#include<bits/stdc++.h> 

using namespace std; 

int main() {

    int a, b, c; 

    cin >> a >> b >> c; 

    if(a + b == c || a + c ==b || c + b == a){
        cout << 1 << endl; 
        return 0; 
    }

    if(a * b == c || a * c ==b || c * b == a){
        cout << 2<< endl; 
        return 0; 
    }

    cout << 3 << endl; 

}