#include <bits/stdc++.h>

using namespace std; 


int main() {

    int n, t;
    cin >> t; 

    while(t--) {
        int mini = 200, maxi = -1, maxindex, minindex, ans, a[1000], k , y; 
        cin >> n; 

        for(int i=0; i<n; i++) {
            cin >> a[i]; 

            if(a[i] > maxi) {
                maxi = a[i]; 
                maxindex = i; 
            }

            if(a[i] < mini){
                mini = a[i];
                minindex = i;  
            }
        }

        //cout << minindex << " " << maxindex << endl;

        if (minindex > maxindex) {
            k = minindex; 
            y = maxindex;
        } else {
            y = minindex; 
            k = maxindex;
        }

        //cout << max(maxindex+1, minindex+1) << " " << max(n - maxindex, n -minindex) << " " << min ((maxindex+ 1 + n - minindex), (n - maxindex + minindex+ 1)) << endl;

        ans = min ( min (max(maxindex+1,minindex+1), max(n - maxindex, n -minindex)), min ((maxindex+ 1 + n - minindex), (n - maxindex + minindex+ 1)));
        cout << ans << endl;
    }
}