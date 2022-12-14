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

bool overload (int a, int b){
    return a > b; 
}

void solve() {

    int n, m, a[1000006];

    cin >> n;
    long long doss = 0; 
    int aux; 
    vector<int> alldoss;
    int total2 = 0; 
    for(int i=0; i<n; i++) {
        cin >> aux;

        while(aux%2 == 0){
            doss++; 
            aux/=2; 
        }

        int numdos = 0; 

        int ii = i + 1; 
        if(ii%2 == 0){
            while(ii%2==0){
                ii/=2; 
                numdos++; 
            }
            alldoss.push_back(numdos);
            total2 += numdos; 
        }
    }

    if( n <= doss){
        cout << 0 << endl; 
        return;
    }

    if(alldoss.empty() || n > total2 + doss) {
        cout << -1 << endl; 
        return; 
    }

    sort(alldoss.begin(), alldoss.end(), overload);
    vector < int > alldossprefixsum;
    alldossprefixsum.push_back(alldoss[0]);

    for(int i=1; i<alldoss.size(); i++){
        alldossprefixsum.push_back( alldoss[i] + alldossprefixsum[i-1]);
    }

    int ans = lower_bound(alldossprefixsum.begin(), alldossprefixsum.end(), n - doss) - alldossprefixsum.begin(); 
    cout << ( ans >= n/2 ? -1: ans+1)  << endl;  


}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        solve();
    }
}