#include <bits/stdc++.h>

using namespace std; 

int n, l, r, x, a[100], ans = 0;

int solve(int i, int sum, int problem, int take){ 

    cout <<endl <<  i << " " << sum << " "; 

    if(i > n) return 0; 

    if(l <= sum && sum <= r && take != 0){
        cout << 1; 
        if(problem + x <= a[i])
            return 1 + solve(i+1, sum + a[i], a[i], 1) + solve(i+1, sum, problem, 0); 
        return 1 + solve(i+1, sum, problem, 0);
    }

    if(i == 0)
        return solve(i+1, a[i] + sum, a[i], 1)+ solve(i+1, sum, problem, 0);
    else if (problem + x <= a[i])
        return solve(i+1, a[i] + sum, a[i], 1) + solve(i+1, sum, problem, 0);  
    else
        return  solve(i+1, sum, problem, 0);
}

int main (){
    int aux; 
    cin >> n >> l >> r >> x; 

    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);  

    aux = solve(0,0,0,0); 

    if (aux > 1)
        cout << aux << endl;
    else
        cout << 0 << endl; 
}