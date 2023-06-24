/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

int n; 

int checkPalindrom(int a[], int init , int end){

    if (init == end) return -1; 

    int maxi = -1, pos; 
    for(int i = init; i<=end; i++){
        if(a[i] > maxi){
            maxi = a[i]; 
            pos = i; 
        }
    }

    int i = pos, j = pos;
    int num = 0; 

    while(i >= init && j  <= end){

        if(a[i] == a[j]){
            num += i == j ? 1 : 2; 
        } else {
            break ;
        }

        i--; 
        j++;
    }
    return num <3 ? -1 : num ; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int  m, a[MAXDATA]; 

    cin >> n; 

    a[0] = -1; 
    a[n+1] = -1; 
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }

    bool up = true, check = false; 
    int init = 0, maxi = -1, end = -1; 

    for(int i=0; i<=n+1; i++){
        if(a[i] == a[i+1]) {
            init = i+1; 
        }
        if(a[i] < a[i+1] && check){
            end = i; 
            int value = checkPalindrom(a, init, end);
            // cout << value << " " << maxi << endl; 
            maxi = max(value, maxi);
            init = i;  
            check = false; 
        }

        if(a[i] > a[i+1]){
            check = true; 
        }
    }

    cout << maxi << endl; 
    
}