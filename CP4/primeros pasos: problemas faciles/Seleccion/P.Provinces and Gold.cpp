#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int a, b, c; 

    cin >> a >> b >> c; 

    int money = a*3 + b*2 + c*1; 

    if(money >= 8){
        cout << "Province or Gold" << endl; 
        return 0; 
    }

    if(money >= 6){
        cout << "Duchy or Gold" << endl; 
        return 0; 
    }

    if(money >= 5){
        cout << "Duchy or Silver" << endl; 
        return 0; 
    }

    if(money >= 3){
        cout << "Estate or Silver" << endl; 
        return 0; 
    }

    if(money >= 2){
        cout << "Estate or Copper" << endl; 
        return 0; 
    }

    cout << "Copper" << endl; 
    return 0; 


}