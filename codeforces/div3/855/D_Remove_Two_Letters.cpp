/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9;  
int MOD = 100003;
long long aux;

const int PRIME_CONST = 31;
 
long long fastpow(int a, int b){
 
    if (b == 0) return 1; 
 
    if (b%2 == 0)
    {
        aux = fastpow(a, b/2);
        return aux*aux%MOD;
    }
    else 
        return a*fastpow(a, b-1)%MOD; 
}

int hashFunction(string key) {
    int hashCode = 0;
    for (int i = 0; i < key.length(); i++) {
        hashCode +=( key[i] * fastpow(PRIME_CONST, i))%MOD;
    }
    return hashCode;
}
 
void solve() {

    int n, a[MAXDATA];  
    memset(a, 0, sizeof a);
    string s; 
    cin >> n; 
    cin >> s;
    int sum = 0;  
    
    for(int i=0; i<n-1; i++){
        string snew  = "";
        snew+= s.substr(0,i);
        if (n-i-1 > 0){
            snew +=s.substr(i+2, n-i-1); 
        }
        int hashnew = hashFunction(snew);
        // cout << hashnew << endl; 
        if(a[hashnew] == 0){
            a[hashnew] = 1;
            sum += 1; 
        }
    }

    cout << sum << endl; 
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