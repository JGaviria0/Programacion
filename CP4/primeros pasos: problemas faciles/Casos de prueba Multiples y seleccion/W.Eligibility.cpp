#include <bits/stdc++.h>

using namespace std; 

int stringtoint(string s){
    int year = 0; 
    for(int i=0; i<4; i++){
        year *= 10; 
        year += (s[i] - 48);
    }

    return year; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    int c; 
    string name, pss, birth;
    int n; 
    cin >> n;
    while(n--){
        cin >> name;
        cin >> pss; 
        cin >> birth;
        cin >> c; 
        
        cout << name;
        int y = stringtoint(pss); 
        int y2 = stringtoint(birth); 

        // cout << endl <<y << " " << y2 << endl; 
        if(y >= 2010 || y2 >= 1991){
            cout << " eligible" << endl; 
            continue; 
        }
        

        if(c >= 41){
            cout << " ineligible" << endl; 
            continue;; 
        }

        cout << " coach petitions" << endl; 
    }
}
