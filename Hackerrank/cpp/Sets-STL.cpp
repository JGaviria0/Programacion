#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    long long n, a[1000006], q1, num;

    cin >> n;
    set <int> newSet;  

    while(n--) {
        cin >> q1 >> num ;
        if(q1 == 1) {
            newSet.insert(num); 
        } else if (q1 == 2){
            
            newSet.erase(num); 
            
        } else {
            set<int>::iterator its = newSet.find(num); 

            if(its == newSet.end()) {
                cout << "No" << endl;
            } else {
                cout << "Yes" << endl;
            }
        }
    }

    return 0; 
}
