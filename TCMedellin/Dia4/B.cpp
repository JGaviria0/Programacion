#include<bits/stdc++.h>

using namespace std; 

const int MAX_DATA = 400000;

int main(){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n, m, l; 
    cin >> n >> m >> l; 

    int originx[MAX_DATA];
    int originy[MAX_DATA];
    int fishers[MAX_DATA];
    map<int, int> x; 
    map<int, int> y;

    for(int i=0; i<n; i++){
        cin >> originx[i] >> originy[i]; 
        x[originx[i]] = -1; 
        y[originy[i]]= -1; 
    }

    int aux; 
    for(int i=0; i<m; i++){
        cin >> fishers[i];
        x[fishers[i]] = -1;
    }


    int i = 0; 
    for(auto &a: x){
        a.second = i; 
        i++; 
    }

    i = 0; 
    for(auto &a: y){
        a.second = i; 
        i++; 
    }

    // for(auto a: x){
    //     cout << a.first << " = " << a.second << endl; 
    // }

    // for(auto a: y){
    //     cout << a.first << " = " << a.second << endl; 
    // }

    int sumtotal[MAX_DATA+20];

    for(int i=0; i<MAX_DATA; i++){
        sumtotal[i] = 0; 
    }
    // memset(prefixsum, -1, sizeof (prefixsum));
    // cout << endl; 
    // cout << l << endl; 
    for(int i=0; i<n; i++){
        int maxi = l - originy[i];
        if(maxi < 0) {
            // cout << originx[i] << " " << originy[i] << " ";
            // cout << maxi << endl; 
            continue; 
        }

        int maxix1 = originx[i] - maxi; 
        int maxix2 = originx[i] + maxi; 

        // cout << originx[i] << " " <<  originy[i] << " -> " << maxix1 << " " << maxix2 << " -> "; 
        // cout << x.lower_bound(maxix1)->second  << " " << x.lower_bound(maxix2)->second+1 << endl; 
        sumtotal[x.lower_bound(maxix1)->second ]++;
        sumtotal[x.lower_bound(maxix2)->second+1 ]--;
    }

    // for(int i=0; i<n+10; i++){
    //     cout << sumtotal[i] << " ";
    // }   

    // cout << endl; 

    for(int i=1; i<300000-n; i++) {
        sumtotal[i] = sumtotal[i] + sumtotal[i-1];
    }

    // for(int i=0; i<20; i++){
    //     cout << sumtotal[i] << " ";
    // }   

    // cout << endl; 

    for(int i=0; i<m; i++){
        cout << sumtotal[x[fishers[i]]] << endl; 
    }
}