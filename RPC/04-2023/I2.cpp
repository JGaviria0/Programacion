/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 
    // int patina[MAXDATA];
    vector<long long> patina;

    cin >> n >> m; 

    long long sum = 0;
    long long value = 5;  
    for(int i=0; i<n; i++){
        long long aux;
        cin >> aux;
        sum += -aux; 
        sum = sum <= 0 ? 0: sum;
        long long val = sum/value;
        // cout << sum << " " << val << endl;  
        patina.push_back( val ); 
    }

    sort(patina.begin(), patina.end());

    for(int i=0; i<m; i++){
        int aux; 
        cin >> aux; 
        auto pos = lower_bound(patina.begin(), patina.end(), aux);

        // cout << pos - patina.begin() << " " << patina[pos - patina.begin()] << " " << aux << endl; 
        // if(patina[pos - patina.begin()] != aux){
        //     cout << 0 << (i == m-1 ? "" : " "); 
        //     continue;
        // }

        cout << n -(pos - patina.begin()) << (i == m-1 ? "" : " "); 
    }

    cout << endl; 
}
