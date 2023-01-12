#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 200005; 
const int MAXLOG = 19;

int st[MAXDATA][MAXLOG];
int logtwo[MAXDATA];

int log_2(int n) {
    return __builtin_clzll(1) - __builtin_clzll(n); 
}

int query(int init, int end){
    init--; end--;
    int length = end - init + 1;   
    int logtochoose = logtwo[length];
    // int logtochoose = log_2(length); // diferent way, use the c++ funcion. 
    return __gcd( st[init][logtochoose], st[end - (1 << logtochoose) + 1][logtochoose]);
}


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, q; 

    logtwo[1] = 0; 
    for(int i=2; i<MAXDATA - 5; i++){
        logtwo[i] = logtwo[i/2] + 1;
    }
    cin >> n >> q;

    for(int i=0; i<n; i++){
        cin >> st[i][0];
    }

    for(int i=1; i <=MAXLOG; i++){
        for(int j=0; (j + (1<<(i)) - 1)<n; j++){ // (1>>(j-1)) = 2^(j-1)
            st[j][i] = __gcd( st[j][i-1], st[j+(1<<(i-1))][i-1]);
        }
    }

    int a, b; 
    for(int i=0; i<q; i++){
        cin >> a >>  b; 
        cout << query(a, b) << endl; 
    }
}