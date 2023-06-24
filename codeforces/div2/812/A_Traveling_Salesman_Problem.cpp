/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e4;
const int oo = 1e9; 

void solve(int a) {

    int n; 

    vector<int> sup; 
    vector<int> inf;
    vector<int> rig;
    vector<int> left;

    cin >> n; 

    for(int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y; 
        if (x ==0 && y < 0){
            inf.push_back(-y);
        }
        if (x ==0 && y > 0){
            sup.push_back(y);
        }

        if (y ==0 && x < 0){
            left.push_back(-x);
        }

        if (y ==0 && x > 0){
            rig.push_back(x);
        }
    }

    sort(inf.begin(), inf.end());
    sort(rig.begin(), rig.end());
    sort(sup.begin(), sup.end());
    sort(left.begin(), left.end());

    long long circle = 0; 
    if(!inf.empty()) {
        circle += (inf[inf.size()-1]-inf[0])*2 + inf[0]*2;
    }
    // cout << circle << endl; 

    if(!rig.empty()) {
        circle += (rig[rig.size()-1]-rig[0])*2 + rig[0]*2;
    }
    // cout << circle << endl; 

    if(!sup.empty()) {
        circle += (sup[sup.size()-1]-sup[0])*2 + sup[0]*2;
    }
    // cout << circle << endl; 

    if(!left.empty()) {
        circle += (left[left.size()-1]-left[0])*2 + left[0]*2;
    }

   

    // cout << "total ";

    cout << circle << endl; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n;

    m = n;  

    while(n--) {
        solve(m - n);
    }
}
