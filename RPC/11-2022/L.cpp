#include <bits/stdc++.h>

using namespace std; 

int find ( vector<int> v, int value){
    
    int ans = -1;
    if (!v.empty()) {
        for(int i=0; i<v.size(); i++){
            if(v[i] == value){
                ans = i; 
                break;
            }
        }
    }

    return ans;
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    string goal, q; 

    cin >> goal;

    map <char, int> esta; 

    for(int i=0; i<goal.size(); i++){
        esta[goal[i]] = 1; 
    }

    bool flag = false;
    for(int h=0; h<7; h++){
        cin >> q; 

        if (flag) {
            continue;
        }

        if (q == goal) {
            cout << "WINNER" << endl; 
            flag = true;
            break;
        }

        if (h == 6) {
            cout << "LOSER" << endl; 
            break;
        }
        
        for(int i=0; i<q.size(); i++) {
            if( esta[q[i]] == 0 ) {
                cout << "X"; 
                continue;
            }

            if( q[i] == goal[i]){
                cout << "G"; 
                continue;
            }

            cout << "Y"; 
        }

        cout << endl; 
    }
    
}