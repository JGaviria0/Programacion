#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    string s; 

    cin >> s; 

    long long tres = 1; 
    long long dos = pow(2, s.size()-1); 
    long long deno = dos;
    long long total = 0; 

    for(int i = s.size()-1; i>=0; i--) {
        long long number = s[i] - '0';
        // cout << number << " " << tres << " " << dos << endl; 
        total += number*tres*dos; 
        dos /= 2; 
        tres *= 3; 

    }
    // int ans = total/deno; 
    cout << total/deno; 
    if ( total %deno != 0) {
        total -= (total/deno) * deno ;   
        while( total%2 == 0 ) {
            deno /= 2; 
            total /= 2; 
        }

        cout << " " << total << "/" << deno;\

    }

    cout << endl; 


    
}