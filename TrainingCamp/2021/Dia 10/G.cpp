#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n, k, aux; 
    string s; 

    cin >> n >> k; 

    int mini = inf, maxi = -1; 
    bool safe = false, broken = false; 
    for(int i=0; i<n; i++){
        cin >> aux >> s; 
        if(s == "SAFE"){        
            if(aux > maxi){
                maxi= aux; 
                safe = true; 
            }
        } else {
            if(aux < mini){
                mini = aux; 
                broken = true; 
            }
        }
    }

    if(safe && !broken){
        mini = k; 
    } else if (!safe && broken){
        maxi = 1; 
    }

    if( maxi + 1 == mini){
        cout << mini << " " <<  maxi<< endl;
    } else{
        cout << maxi + 1<< " " << mini - 1 << endl;
    }

    

    return 0; 
}
