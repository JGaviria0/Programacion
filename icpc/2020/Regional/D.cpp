#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006];
    int aux; 

    map<int, int> mapis; 

    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> aux;
        mapis[aux]++; 
    }

    for(auto i: mapis){
        if(i.second%2 == 0) {
            mapis[i.first + 1] += i.second/2; 
            mapis[i.first] = 0;
        }else {
            mapis[i.first + 1] += (i.second -1) /2; 
            mapis[i.first] = 1;
        }
    }

    for(auto i : mapis){
        cout << i.first << " -> " << i.second << endl;
    }
}
