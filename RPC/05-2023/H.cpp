/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e5 + 6;
const int oo = 1e9; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m, a[MAXDATA];

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    int left[MAXDATA];
    int right[MAXDATA];
    
    left[0] = 0; 
    int i = 0, j = 1; 
    while(j < n){
        if(a[i] >= a[j]){
            left[j] = left[i] == -1 ? i : left[i];
        } else {
            left[i+1] = -1; 
        }
    }

    right[n-1] = n-1; 
    for(int i=n-1; i>0; i--){
        // cout << i << endl; 
        if(a[i] >= a[i-1]){
            right[i-1] = right[i] == -1 ? i : right[i];
        } else {
            right[i-1] = -1; 
        }

        
    }

    for(int i=0; i<n; i++){
        cout << left[i] << " " ; 
    }
    cout << endl; 

    for(int i=0; i<n; i++){
        cout << right[i] << " " ; 
    }


    cout << endl; 
}