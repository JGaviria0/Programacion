#include <bits/stdc++.h>

using namespace std; 

void solve() {

    int q, m, a[1000006];

    cin >> q; 

    int whatstring, num;
    string s;

    priority_queue<char> a1; 
    priority_queue<char> b2; 

    map <char, int> estaa1; 
    map <char, int> estab2; 

    for(int idx=0; idx<q; idx++) {
        
        cin >> whatstring >> num >> s;

        for(int j=0; j<s.size(); j++){
            if(whatstring == 1){
                if (estaa1[s[j]] == 0) {
                    a1.push( 'a' - s[j] );
                }
                estaa1[s[j]] += num;
            } else {
                if (estab2[s[j]] == 0) {
                    b2.push(s[j] - 'a');
                }
                estab2[s[j]] += num;
            }
        }

        int mostrara = a1.empty() ? -1 : a1.top();
        int mostrarb = b2.empty() ? -1 : b2.top();
        cout << "b: " << mostrarb << " a: " <<  mostrara << endl;
        if((b2.empty() && a1.empty())) {
            cout << "NO" << endl; 
            continue;
        }

        if(b2.empty() ) {
            cout << "NO" << endl; 
            continue;
        }

        if(a1.empty() ) {
            cout << "YES" << endl; 
            continue;
        }

        if ( abs(b2.top()) == abs(a1.top())) {
            
            char inttocharanext = char( a1.top() + 'a' + 1);
            char inttocharbprev = char( a1.top() + 'a' + 1);

            if(estaa1[inttocharanext] > 0 && estab2[inttocharbprev] > 0){
                
            }

            char inttochara = char( a1.top() + 'a');


            cout << inttochara  << " " << estaa1[inttochara] << " " << estab2[inttochara] << " " << estaa1.size() << " " << estab2.size()<< endl;
            if( estaa1[inttochara] < estab2[inttochara] && (estab2.size() != 1 || estaa1.size() == estab2.size())){
                cout << "YES" << endl ;
                continue;
            }
        }

        if ( abs(b2.top()) > abs(a1.top())) {
            cout << "YES" << endl ;
            continue;
        }

        cout << "NO" << endl; 
        

    }
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