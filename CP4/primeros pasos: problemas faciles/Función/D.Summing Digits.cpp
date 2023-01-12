#include <bits/stdc++.h>

using namespace std; 

double reduce(int sum){
    double sums1 = sum; 
    while(sums1 >= 10){
        int aux = sums1; 
        int sum = aux%10; 
        while(aux > 0){
            aux /= 10;
            sum += aux%10; 
        }
        sums1 = sum; 
    }

    return sums1; 
}


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

     

    while(cin >> n && n != 0) {
        cout << reduce(n) << endl; 
    }
}