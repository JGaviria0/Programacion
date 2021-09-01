#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;
int maxi = -1; 

void solve(int a[], int i, int n){
    if(i >= n) return; 

    int low = lower_bound(a, a+n, 1) - a; 

    if (low - i > maxi){
        maxi = low - i; 
    }

    solve(a, low+1, n);

}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[200006], b[200006], t;


    cin >> n >> t;

    cin >> a[0];
    
    
    for(int i=1; i<n; i++){
        cin >> a[i];
        if (a[i] - a[i-1] > t){
            b[i] = 1; 
        } else {
            b[i] = 0;
        }
    } 

    solve(b, 0, n);
    cout << maxi << endl;


    return 0; 
}
