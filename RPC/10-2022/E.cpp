#include <bits/stdc++.h>

using namespace std; 

void printstck ( stack<char> s ) {

    while(!s.empty()) {
        cout << s.top() << " <- "; 
        s.pop(); 
    }

    cout << endl; 
}

pair<int, stack<char>> reduce ( string a) {

    int bs = 0;  

    stack<char> sta; 
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] == 'B'){
            bs++; 
            continue;
        }
        if(!sta.empty()) {
            char up = sta.top();
            if( up == a[i] ) {
                sta.pop();
            } else {
                sta.push(a[i]);
            }
        } else {
            sta.push(a[i]); 
        }
    }

    return { bs, sta };
}

void solve() {

    string a, b; 

    cin >> a >> b; 

    
    pair<int, stack<char>> reducea; 
    pair<int, stack<char>> reduceb;

    reducea = reduce(a); 
    reduceb = reduce(b); 

    // cout << reducea.first << " = ? "; 
    // cout << reduceb.first << endl; 
    // printstck(reducea.second); 
    // cout << "Otra" << endl; 
    // printstck(reduceb.second); 


    if( reducea.first%2 != reduceb.first%2 || reducea.second.size() != reduceb.second.size()) {
        cout << "NO" << endl; 
        return; 
    }

    while(!reducea.second.empty() && !reduceb.second.empty()) {
        // cout<< reducea.second.top() << " " << reduceb.second.top() << endl; 
        if ( reducea.second.top() == reduceb.second.top()) {
            reducea.second.pop();
            reduceb.second.pop();
        } else {
            cout << "NO" << endl; 
            return; 
        }
    }

    cout << "YES" << endl; 
    return; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    while(n--) {
        // cout << "problem " << 8 - n<< endl; 
        solve();
    }
}