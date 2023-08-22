#include <bits/stdc++.h>

using namespace std; 

int main(){

    int n;
    double a[100005]; 

    double sum = 0;

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }

    cout << sum/2 << " ";

    double solve = (sum/2)/n-1;
    for(int i=0; i<n; i++){
        cout << solve << " ";
    }

    cout << endl; 

}