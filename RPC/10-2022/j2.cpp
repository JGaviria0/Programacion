#include <bits/stdc++.h>

using namespace std; 
int criba[2000040];
int nump = 0; 
int primos[100006];

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}


void cribaE() {
    int n = 1e5+20; 
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
    int primosb[1000006]; 
    int expob[1000006]; 
    int nb = b.size(); 

    for(int i=0; i<nb; i++) {
        primosb[i] = b[i].first;
        expob[i] = b[i].second;  
    }

    for(int i=0; i<a.size(); i++) {
        cout << a[i].first << " "; 
    }

    cout << endl; 

    for(int i=0; i<b.size(); i++) {
        cout << primosb[i]  << " "; 
    }

    cout << endl ;
    
    vector<pair<int, int>> ans ;

    for(int i=0; i<a.size(); i++) {
        int pos = lower_bound(primosb, primosb+nb, a[i].first) - primosb;
        if( primosb[pos] ==  a[i].first) { 
            ans.push_back( { a[i].first, min(a[i].second, expob[pos])}); 
        }
    }

    return ans; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);

    cribaE();
    int t; 
    int w, l; 
    cin >> t;
    
    while(t--) {
        cin >> w >> l ;
        int posiblesn[] = { -1, -2, 0};
        int posiblesm[] = { -1, 0, -2};
        set<int>ans; 
        ans.insert(1);

        // if ((w%2 == 0 && l%2 != 0) ||  (w%2 != 0 && l%2 == 0))  {
        //     ans.insert(2);
        // }
        for(int i=0; i<3; i++) {
            int ngcd = gcd(w+posiblesn[i], l+posiblesm[i]);

            // cout << ngcd << endl;
            ans.insert(ngcd); 

            for(int i=2; i<=sqrt(ngcd); i++) {
                if(ngcd%i == 0) { 
                    ans.insert(i);
                    ans.insert(ngcd/i);
                }
            }
        }
        
        cout << ans.size(); 

        for(auto &i : ans) {
            cout << " " << i;  
        }

        cout << endl; 
    }
}