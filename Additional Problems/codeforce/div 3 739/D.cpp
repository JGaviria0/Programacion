#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int get (long long k, long long n) {
    string N = to_string(n); 
    string K = to_string(k); 
    int indexForN = 0; 
    int changes = 0; 

    for(int indexForK=0; indexForK<K.length(); indexForK++) {
        if(N[indexForN] == K[indexForK]) {
            indexForN++; 
        } else {
            changes++; 
        }
    }

    if(indexForN != N.length()) {
        changes += N.length() - indexForN;
    }
    return changes; 
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, k, q; 

    cin >> q; 

    while(q--) {
        cin >> n; 
        int min = 1000;
        for(long long i=1; i<=3e18; i = i*2) {
            int change = get(n, i);
            if(change < min) {
                min = change; 
            }   
        }
        cout << min <<  endl;
    }



    return 0; 
}
