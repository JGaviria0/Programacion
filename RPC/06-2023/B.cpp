#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 
int n, v[100000]; 

const int MAX  = 2e7; 
int primos[MAX];
int numPrimos = 0; 
int match[MAX];

int memo[800][800];

void criba(){
    match[1] = 1; 

    for(int i= 2; i<MAX; i++){
        if(match[i] != 1){
            // cout << i << endl; 
            primos[numPrimos] = i; 
            numPrimos++; 
            for(int j = 2; j*i<MAX; j++){
                match[j*i] = 1; 
            }
        }
    }
}

int solve(int i, int j){
    
}



int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    criba();

    memset(memo, -1, sizeof memo);
    // for(int i=0; i<numPrimos; i++){
    //     cout << primos[i] << " ";
    // }
    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

}