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
    map<string, int> dic;

    cin >> n; 
    string aux;
    while(n--) {
        cin >> aux;
        if (dic[aux] == 0){
            cout << "OK" << endl; 
        } else {
            cout << aux << dic[aux] << endl;
        }
        dic[aux]++;
    }
}