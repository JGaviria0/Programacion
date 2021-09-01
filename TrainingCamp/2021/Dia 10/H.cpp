#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[1000006];

    cin >> n ;

    for(int i=0; i<n; i++){
        cin >> a[i]; 
    }

    sort(a, a+n);

    int i =0, j = n-1, mini = inf;  

    while(i < j){
        if(a[i] + a[j] < mini){
            mini = a[i] + a[j];
        }
        i++; 
        j--; 
    }


    cout << mini << endl;




    return 0; 
}
