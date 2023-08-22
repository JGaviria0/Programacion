#include <bits/stdc++.h>

using namespace std; 


int oo = 1e9; 

int main() {

    int n, m; 

    cin >> n >> m;  
    string aux; 
    int cookiee[1004][1004];

    memset(cookiee, -1, sizeof cookiee); 
    queue<pair<int, int>> q;  


    for(int i=0; i<=n; i++){
        cookiee[i][0] = 0;  
        cookiee[i][m+1] = 0;  
        q.push({i,0}); 
        q.push({i,m+1}); 
    }

    for(int i=0; i<=m; i++){
        cookiee[0][i] = 0;  
        cookiee[n+1][i] = 0;  
        q.push({0,i}); 
        q.push({n+1,i}); 
    }

    for(int i=1; i<=n; i++){
        cin >> aux; 
        for(int j=0; j<m; j++){
            if(aux[j] == '-'){
                cookiee[i][j+1] = 0; 
                q.push({i,j+1}); 
            } else {
                cookiee[i][j+1] = oo; 
            }
        }
    }

    




    while(!q.empty()){
        pair<int, int> now = q.front(); 
        q.pop(); 
        int i = now.first; 
        int j = now.second; 

        for(int movei = -1; movei<=1; movei++){
            for(int movej = -1; movej <=1; movej++){
                if(abs(movei) + abs(movej) == 1){
                    if(cookiee[i + movei][j + movej] == oo){
                        cookiee[i + movei][j + movej] = cookiee[i][j] + 1;
                        q.push({i+movei, j+movej}); 
                    }
                }
            }
        }
    }

    int ans = 0; 
    for(int i=0; i<=n+1; i++){
        for(int j=0; j<=m+1; j++){
            ans = max(ans, cookiee[i][j]); 
        }
    }

    // for(int i=0; i<=n+1; i++){
    //     for(int j=0; j<=m+1; j++){
    //         cout << cookiee[i][j] << " "; 
    //     }

    //     cout << endl ;
    // }


    cout << ans << endl; 
}