#include <bits/stdc++.h>
#include <iostream>
#include <cstdlib>

using namespace std; 

const int inf = 10000007;

void productoP(int a[][20], vector<int> b, int n, int m){
    int k = 0;
    int index = 0; 
    int q = m/n; 
    if(q*n < m) q++;
    for(int f=0; f<q; f++){
        for(int i=0; i<n; i++){
            k = f*n;
            int cont = 0; 
            for(int j=0; j<n; j++){
                cont += a[i][j] * b[k];
                k++;
            }

            int ans = cont%37 + 'A';
            if (ans == 101){
                cout << " ";
            } else if (ans >90){
                cout << ans - 91;
            } else {
                cout << char(ans);
            }
             
            index++;
        }
    }
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, a[20][20];
    char s[1000006];
    vector <int> aux; 

    cin >> n;

    for(int i =0; i<n ;i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    cin.ignore();
    cin.getline(s, 1000);
    
    int i = 0;
    while(s[i] != '\0'){
        int res = s[i] - 'A'; 
        if (s[i] == ' ') {
            aux.push_back(36) ;
        } else if( res <=-8 && res >=-17 ) {
            aux.push_back(res + 43);
        } else {
           aux.push_back(s[i] - 'A');
        }
        i++;
    }

    for(int j=0; j<n; j++){
        aux.push_back(36); 
    }

    // for(int j=0; j<i + (i%n)  -1; j++){
    //     cout << aux[j] << " ";
    // }
    // cout << endl;
    
    productoP(a,aux,n,i);

    cout << endl;

    return 0; 
}
