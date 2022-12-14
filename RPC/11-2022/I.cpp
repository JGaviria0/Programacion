#include <bits/stdc++.h>

using namespace std; 


int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    double p, P, m; 

    cin >> p;

    double mini = 1e9;
    int nmini = -1; 

    for(int n=2; n<17; n++){

        double P = pow ((1-p), n); 

        double res = P + n*(1-P);

        if (mini > res/n){
            mini = res/n; 
            nmini = n; 
        }

    }


    if (mini >= 1) {
        cout << 1 << endl; 
        return 0;
    } 

    cout << nmini << endl; 

    
}