/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

int sumdigits(int n){
    int sum = 0;
    while(n>0){
        sum+= n%10; 
        n /= 10; 
    }

    return sum;
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n = 100; 

    for(int k=0; k<30; k++){
        cout << "for: " << k << endl; 
        for(int i = 0; i<k; i++){
            for(int j=i; j<k; j++){
                if(i + j == k){
                    int a = sumdigits(i);
                    int b = sumdigits(j);
                    if(a + 1 == b || a - 1 == b || a == b){
                        cout << i << " " << j << endl; 
                    }
                }
            }
        }
    }
}