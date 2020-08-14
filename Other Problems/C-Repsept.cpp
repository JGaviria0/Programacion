#include <bits/stdc++.h>

using namespace std; 

int sietes(int n){

    int ans = 7; 

    for(int i=1; i<n; i++)
    {
        ans = ans * 10 + 7;
    }
    return ans; 
}

int main (){

    int n , m; 
    bool flag; 
    int i=1; 

    cin >> i; 

    cout << sietes(i) << endl; 
}