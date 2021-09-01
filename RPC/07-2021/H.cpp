#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0); cin.tie(0);
    int n, a[2000006], t, aux, aux3, t;
    char aux2; 

    vector<int> papel, sinPapel;  
    cin >> t >> n;

    for(int i=0; i<n; i++){
        cin >> aux >> aux2; 
        if (aux2 == 'y'){
            papel.push_back(aux);
        } else {
            sinPapel.push_back(aux);
        }
    }

    sort(papel.begin(), papel.end());
    sort(sinPapel.begin(), sinPapel.end());

    int i =0, j=0, k=0; 
    while(!papel.empty() && !sinPapel.empty()){
        int m =0; 
        bool elPapel = false;
        while(m<t){
            if ()

        }
        
    }
    return 0; 
}
