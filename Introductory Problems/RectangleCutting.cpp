/*  
https://cses.fi/problemset/task/1158
Metodo: DP(Recursivo)
Jhon Alex Gaviria
*/

int dp[500][500];

int solve(int a, int b){

    if (a < 0 || b < 0)
        return 0; 

    if (a == b)
        return 0; 

    int &ans = dp[a][b];

    if(ans != -1)   return ans;

    for(int i = 0; i < max(a,b); i++)
        ans = min(solve(a-i, b) + solve(i, b) + 1, solve(a, b-i) + solve(a, i) + 1); 
}

int main () {

    int a, b; 

    cin >> a >> b;

    cout << solve(a,b) << endl;
   
}