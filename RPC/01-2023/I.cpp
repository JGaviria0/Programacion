/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e6 + 6;
const int oo = 1e9; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    string s; 

    cin >> s;
    int zero = 0; 
    int maxi = -1; 
    int init = 0; 
    int end = 0; 
    // for(int i=0; i<s.size(); i++){
    //     if(s[i] == '1'){
    //         break; 
    //     }else{
    //         init++;
    //     }
    // }

    // for(int i=s.size() - 1; i<; i++){
    //     if(s[i] == '1'){
    //         break; 
    //     }else{
    //         init++;
    //     }
    // }

    s+= "1"; 
    for(int i=0; i<s.size(); i++){
        if(s[i] == '0'){
            zero++;
        } else{
            maxi = max(zero, maxi);
            zero = 0; 
        }
    } 

    double maxi2 = maxi;
    cout << ceil(maxi2/2) << endl; 
}