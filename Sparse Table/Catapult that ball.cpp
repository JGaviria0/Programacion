#include <bits/stdc++.h>

using namespace std;

const int MAXDATA = 1e5 + 10; 
const int MAXLOG = 17;
int st[MAXDATA][MAXLOG];
int logs2[MAXDATA];

int query(int init, int end){

    int length = end - init + 1; 
    int logs = logs2[length];
    return max(st[init][logs], st[end - (1<<logs) + 1][logs]); 
}

int main() {
      
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n >> m;  

    logs2[1] = 0; 

    for(int i=2; i<MAXDATA; i++){
        logs2[i] = logs2[i/2] + 1; 
    }

    for(int i=0; i<n; i++){
        cin >> st[i][0];
    }

    for(int i=1; i<MAXLOG; i++){ 
        for(int j=0; j + (1<<i) -1 < n; j++){
            st[j][i] = max(st[j][i-1], st[j + (1<<(i-1))][i-1]);
        }
    }

    int a, b; 
    int cont = 0; 
    for(int i=0; i<m; i++){
        cin >> a >> b; 
        if( a + 1 == b || query(a, b-2) <= st[a-1][0]){
            cont++; 
        }
    }


    cout << cont << endl; 



    
}