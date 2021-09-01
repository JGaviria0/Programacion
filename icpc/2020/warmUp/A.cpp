#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[2000006];

    cin >> n; 

    a[0] = 0;
    int aux;
    for(int i=1; i<=n; i++){
        cin >> aux;
        a[i] = aux + a[i-1];
    }

    for(int i=0; i<n; i++){
        int perpe = a[i] + a[n]/2; 
        int low = lower_bound(a,a+n, perpe) - a;
        if(a[low] == perpe){
            perpe = (a[i] + a[n]/2)/2; 
            low = lower_bound(a,a+n, perpe) - a;
            if(a[low] == perpe){
                perpe = (a[i] + a[n]/2)/2 + ( a[i] + a[n]/2); 
                low = lower_bound(a,a+n, perpe) - a;
                if(a[low] == perpe){
                    cout << "Y" << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << "N" << endl;

    return 0; 
}
