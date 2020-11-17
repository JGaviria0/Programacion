#include<bits/stdc++.h>

using namespace std;

int main() {

    long long n, ans, ga, fin, ans2; 

    while(cin >> n && n != 0) {
        ans = ceil((-1 + sqrt(1+8*n))/2); 

        ga = (ans*(ans+1))/2;
        
        fin = ga - n; 

       
        //cout << ans << " " << ga  << " " << fin<< endl; 
        
        if(ans%2 != 0) {
            ans -= fin; 
            ans2 = fin + 1;
            cout << ans2 << " " << ans << endl;
        } else {
            ans -= fin; 
            ans2 = fin + 1;
            cout << ans << " " << ans2 << endl;
        }
    }
}