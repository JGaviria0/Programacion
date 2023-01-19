/*  
https://codeforces.com/problemset/problem/514/D
Metodo: Sparse table, binary search.
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e5+10;
const int MAXLOG = 18;
int st[MAXDATA][MAXLOG][6]; 
int logtwo[MAXDATA];

int query(int init, int end, int detail){

    int length = end - init + 1; 
    int logs = logtwo[length]; 

    return max(st[init][logs][detail],st[end - (1<<logs) + 1][logs][detail]);
}

// int bs(int init, int n, int m, int k){

//     int lo = init, up = n-1, ans = n-1; 

//     while(lo < up){
//         int mid = (up + lo)/2;

//         long long summax = 0;
//         // cout << lo << " " << up << " = ";
//         for(int i=0; i<m; i++){
//             int aux = query(lo, up, i);
//             // cout << aux << " "; 
//             summax += aux; 
//         }
//         // cout << endl;

//         if (summax <= k){
//             lo = mid + 1; 
//         } else { 
//             ans = mid;  
//             up = mid - 1; 
//         }
//     }

//     // cout << "finish: " << init << " " << ans << endl ;
    
//     return ans- init + 1; 
// }

// void solve(int n, int m, int k){

//     int i = 0; 
//     int maxi = -1; 
//     int imax = i; 

//     while(i < n) {
//         int value = bs(i, n, m, k);
//         // cout << value << endl; 
//         if (value > maxi){
//             maxi = value; 
//             imax = i; 
//         }

//         i++;
//     }
 
//     for(int i=0; i<m; i++){
//         cout << query(imax, imax + maxi - 1, i) << " ";
//     }
//     cout << endl; 
// }

int check(int x, int k, int n, int m){
    for(int i=0; i<n-x+1; i++){
        int sum = 0;
        for(int det=0; det<m; det++){
            sum += query(i, i+x-1, det);
        }
        if(sum <= k) return i;
    }

    return -1; 
}

void solve(int n, int m, int k){


    int l = 0, r = n-1, ans = -1; 

    while(l <= r){
        int mid = (l+r)/2;
        if(check(mid, k, n, m) > -1){
            l = mid + 1;
            ans = mid; 
        }else {
            r = mid - 1; 
        }
    }

    if(ans > -1){
        int init = check(ans, k, n, m);
        // cout << init << endl;
        for(int det=0; det<m; det++){
            cout << query(init, init+ans-1, det) << " ";
        }
    }else {
        for(int det=0; det<m; det++){
            cout << 0 << " ";
        }
    }
    cout << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m, k; 

    cin >> n >> m >> k; 

    logtwo[1] = 0; 
    for(int i=2; i<MAXDATA; i++){
        logtwo[i] = logtwo[i/2] + 1; 
    }
    bool flag = false; 
    for(int i=0; i<n; i++){
        long long sum = 0; 
        for(int j=0; j<m; j++){
            cin >> st[i][0][j]; 
            sum += st[i][0][j];
        } 

        if(sum <= k){
            flag = true; 
        }
    }

    if(!flag){
        for(int i=0; i<m; i++){
            cout << 0 << " ";
        }
        cout << endl; 
        return 0; 
    }


    for(int details = 0; details<m; details++){
        for(int ilog=1; ilog<MAXLOG; ilog++){
            for(int j = 0; j + (1<<ilog) - 1 < n; j++){
                st[j][ilog][details] = max( st[j][ilog-1][details], st[j + (1<<(ilog-1))][ilog-1][details] );
            }
        }
    }

    solve(n, m, k);
}