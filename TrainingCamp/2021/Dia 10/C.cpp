#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006];

    string aux, aux2;
    // map<pair<string, string>, int> names;
    vector <pair<string, string>> names;
    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> aux >> aux2; 
        aux[0] = tolower(aux[0]);
        aux2[0] = tolower(aux2[0]);
        names.push_back(make_pair(aux2, aux)); 
    }   

    sort(names.begin(), names.end());

    for(auto k: names){
        aux = k.first; 
        aux2 = k.second; 
        aux[0] = toupper(k.first[0]);
        aux2[0] = toupper(k.second[0]);
        cout << aux2 << " " << aux << endl; 
    }

    return 0; 
}
