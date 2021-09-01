#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;


int solve(int n, int a[]){
    int vec[5][100005];
    if (n == 0) return a[0]; 
    int j =0; 
    int maxi = -1; 
    for(int i=0; i<n; i++){
        vec[j][n%4] = n;  
        cout << n << " ";
        if(maxi < n ) {
            maxi = n;
        }

        if(n%4 == 3){
            j++;
        } 
    }

    return maxi + solve(n/4, vec[0]) + solve(n/4, vec[1]) + solve(n/4, vec[2]) + solve(n/4, vec[3]);
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[2000006]; 

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    cout << solve(n, a) << endl;

    return 0; 
}
