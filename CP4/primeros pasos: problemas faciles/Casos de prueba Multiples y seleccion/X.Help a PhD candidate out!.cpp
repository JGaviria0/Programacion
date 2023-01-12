#include <bits/stdc++.h>

using namespace std; 

int stringtoab (string ab){
    int a = 0, b = 0; 
    bool flag = true; 
    for(int i=0; i<ab.size(); i++){
        if(flag){
            if(ab[i] == '+'){
                flag = false; 
                continue;
            }
            a *= 10; 
            a += (ab[i] - 48);
        } else {
            b *= 10; 
            b += (ab[i] - 48);
        }
    }

    return a + b; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n; 

    string ab; 
    while(n--) {
        cin >> ab; 
        if(ab == "P=NP"){
            cout << "skipped" << endl;
            continue; 
        }

        cout << stringtoab(ab) << endl; 


        
    }
}