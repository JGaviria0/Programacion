#include <bits/stdc++.h>

using namespace std; 
const int MXT = 2000040;
int criba[MXT];
int nump = 0; 
int primos[100006];

void cribaE() {
    int n = 1e6+20; 
    for(int i=2; i<n; i++) {
        criba[i] = -1; 
    }

    for(int i=2; i<n; i++) {
        if( criba[i] != -1) {
            continue;
        }
        for(int j=2; j*i<n; j++) {
            criba[j*i] = 1; 
        }
    }

    for(int i=2; i<n; i++) {
        if (criba[i] == -1) {
            primos[nump] = i; 
            nump++; 
        }
    }
}

vector <pair <int , int >> tfa (int n) {
    vector<pair <int , int >> ans;
    int k = n;  
    int i = 0; 
    while (n > 1)
    {
        if (i >= nump) {
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

vector<pair<int, int>>  comundivisors( vector <pair <int , int >> a, vector <pair <int , int >>b) {
    int primosb[MXT]; 
    int expob[MXT]; 
    int nb = b.size(); 

    for(int i=0; i<nb; i++) {
        primosb[i] = b[i].first;
        expob[i] = b[i].second;  
    }
    
    vector<pair<int, int>> ans ;

    for(int i=0; i<a.size(); i++) {
        int pos = lower_bound(primosb, primosb+nb, a[i].first) - primosb;
        if( primosb[pos] ==  a[i].first) { 
            ans.push_back( { a[i].first, min(a[i].second, expob[pos])}); 
        }
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

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);

    cribaE();
    int t; 
    int w, l; 
    cin >> t;

    int posx[] = { 1, 0, 2};
    int posy[] = { 1, 2, 0};
    while(t--) {
        // cout << primos[nump-1] << endl; 
        set <int> res;

        cin >> w >> l ;

        if ((w%2 == 0 && l%2 != 0) ||  (w%2 != 0 && l%2 == 0))  {
            res.insert(2);
        }

        for(int i=0; i<3; i++){
            vector<pair<int, int>> a; 
            vector<pair<int, int>> b; 
            vector<pair<int, int>> div; 
            // a = tfa(w-posx[i]);
            // b = tfa(l-posy[i]);
            // div = comundivisors(a, b);

            int GCD = __gcd(w-posx[i], l-posy[i]);
            b = tfa(GCD);
            // cout << w-posx[i] << " " << l-posy[i] << endl; 

            // for(int k=0; k<div.size(); k++){
            //     cout << div[k].first << " -> " << div[k].second  << endl; 
            // }
            vector<int> allmulti;
            allmulti = allposibles(b);

            for(int h=0; h<allmulti.size(); h++){
                // cout << allmulti[h] << " ";
                res.insert(allmulti[h]);   
            }
        }

        // cout << endl; 

        // sort(res.begin(), res.end());
        cout << res.size();
        for (auto &it : res){
            cout << " " <<it ; 
        }
        cout << endl; 
    }
}