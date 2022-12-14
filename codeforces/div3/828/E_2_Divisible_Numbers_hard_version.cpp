#include <bits/stdc++.h>

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

vector<long long> allposibles( vector<pair<int, int>> v) {

    vector<long long> div; 

    div.push_back(1);

    for(int i=0; i<v.size(); i++) {
        int factor = v[i].first;
        int expo = v[i].second;
        int limit = div.size();

        long long value = 1;
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

vector< pair <int, int>> mergeprimos( vector< pair <int, int>> a, vector< pair <int, int>>b){

    int i = 0; 
    int j = 0; 

    vector< pair <int, int>> merge; 
    while(i < a.size() || j < b.size()){

        if( i >= a.size()){
            merge.push_back(b[j]);
            j++;
            continue;
        }

        if( j >= b.size()){
            merge.push_back(a[i]);
            i++;
            continue;
        }

        if( a[i].first == b[j].first){
            merge.push_back({a[i].first, a[i].second + b[j].second});
            i++; 
            j++; 
            continue;
        }

        if( a[i].first < b[i].first){
            merge.push_back(a[i]);
            i++; 
        } else {
            merge.push_back(b[j]);
            j++; 
        }
    }

    return merge; 

}

void solve() {

    int a, b, c, d; 

    cin >> a >> b >> c >> d; 

    vector<pair < int, int>> primosa = tfa(a); 
    vector<pair < int, int>> primosb = tfa(b); 

    vector<pair < int, int>> merge = mergeprimos( primosa, primosb);

    vector<long long> divi = allposibles(merge);
    long long ab = a*b; 
    for(int i=0; i<divi.size(); i++){
        cout << divi[i] << endl; 
        if(divi[i] > a && divi[i] <= c){
            if(ab/divi[i] > b && ab/divi[i] <= d){
                cout << divi[i] << " " << ab/divi[i] << endl; 
                return; 
            }
        }
        if(divi[i] > b && divi[i] <= d){
            if(ab/divi[i] > a && ab/divi[i] <= c){
                cout << divi[i] << " " << ab/divi[i] << endl; 
                return; 
            }
        }
    }

    cout << -1 << " " << -1 << endl; 


}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    criba();
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}