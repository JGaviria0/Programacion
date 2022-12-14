#include<bits/stdc++.h>

using namespace std; 

const int MAX  = 2e5; 
int primos[MAX];
int numPrimos = 0; 
int match[MAX];

void criba(){
    match[1] = 1; 

    for(int i= 2; i<MAX; i++){
        if(match[i] != 1){
            // cout << i << endl; 
            primos[numPrimos] = i; 
            numPrimos++; 
            for(int j = 2; j*i<MAX; j++){
                match[j*i] = 1; 
            }
        }
    }
}

vector <pair <int , int >> tfa (int n) {
    vector<pair <int , int >> ans;
    int k = n;  
    int i = 0; 
    while (n > 1)
    {
        if (i >= numPrimos) {
            ans.push_back({n, 1});
            break; 
        }
        if( n%primos[i] == 0) {
            // cout << primos[i] << "|" << n << endl; 
            int expo = 0; 
            while( n%primos[i] == 0) {
                n /= primos[i]; 
                expo++; 
            }
            // cout << n  << endl; 
            ans.push_back({primos[i], expo});
        }
        i++; 
    }

    return ans; 
}

vector<int> allposibles( vector<pair<int, int>> v) {

    vector<int> div; 

    div.push_back(1);
    int value = 1; 

    for(int i=0; i<v.size(); i++) {
        int factor = v[i].first;
        int expo = v[i].second;
        int limit = div.size();

        int value = 1;
        for(int j=0; j<expo; j++) {
            value *= factor;

            for(int k=0; k<limit; k++){
                div.push_back(value * div[k]);
            }

        }

    }

    sort(div.begin(), div.end());

    // for(int i=0; i<div.size(); i++){
    //     cout << div[i] << " ";
    // }

    // cout << endl ;

    return div; 
}