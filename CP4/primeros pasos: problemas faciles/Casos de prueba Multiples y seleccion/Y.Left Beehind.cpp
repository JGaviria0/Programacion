#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 


    while(cin >> n >> m) {
        if(n == 0 && m == 0) return 0; 

        if(n + m == 13){
            cout << "Never speak again."<< endl; 
            continue; 
        }
        
        if(n == m){
            cout << "Undecided."<< endl; 
            continue; 
        }

        if(n > m){
            cout << "To the convention."<< endl; 
            continue; 
        }

        cout << "Left beehind."<< endl;  
    }
}