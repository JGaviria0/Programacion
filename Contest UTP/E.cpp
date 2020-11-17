#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, a[100005];
    double ans;  

    while(cin >> n && n != 0) {
        for(int i = 0; i<n; i++) {
            cin >> a[i]; 
        }

        sort(a, a+n); 

        if(n%2 == 1) {
            ans = a[n/2];
        } else {
            ans =  a[n/2 - 1] + a[n/2];
            ans /= 2;   
        }

        printf("%.1f\n", ans);  
    }
}