#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

bool ans = false; 

void solve(int a[], int i, int n,int sum){

    if(i>n) return;

    if(i == n && sum == 0) {
        ans = true; 
    }

    solve(a,i+1,n,(sum + a[i])%360); 
    solve(a,i+1,n,(sum - a[i])%360); 
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[10006];

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    solve(a,0,n,0); 

    if (ans){
        cout << "YES";
    } else {
        cout << "NO";
    }

    cout << endl;

    return 0; 
}
