#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int b,k, a[10005]; 

    cin >> b >> k; 

    for(int i=0; i<k; i++){
        cin >> a[i]; 
    }

    int pot = b%2; 
    int ans = 0; 

    ans = a[k-1]%2; 

    for(int i=k-2; i>=0; i--){
        if(pot != 0 && a[i]%2 != 0){
            ans++; 
        }
    }

    if(ans%2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }

    return 0; 
}
