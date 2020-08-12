/*  
https://cses.fi/problemset/task/1745
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int dp[100005][105], n, coin[104], answ[100005];

void solve(int i, int j){

    if (j>n) return; 

    if(dp[i][j] != -1) return; 

    dp[i][j] = 1;

    solve(i+coin[j], j+1);

    solve(i, j+1);
}

int main () {

    int  cont=0;

    memset(dp, -1, sizeof dp);

    cin >> n;

    for(int i= 0; i<n; i++)
        cin >> coin[i];

    solve(0,0);

    for(int i=0; i<100003; i++)
    {
        for(int j=0; j<104; j++)
        {
            if(dp[i][j] == 1)
            { 
                answ[cont] = i;
                cont++;
                break;
            }
        }
    }

    cout << cont-1 << endl;

    for(int i=1; i<cont; i++)
        cout << answ[i] << " ";
    
    cout << endl;

}