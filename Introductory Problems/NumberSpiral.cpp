/*  
https://cses.fi/problemset/task/1071
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h> 

using namespace std;

int main(){

    long long r, c, n; 

    cin >> n;

    while(n--){
        cin >> r >> c;  

        if (r>c)
        {
            if(r%2 == 0)
                cout << (r*r)-c+1 << endl;
            else
                cout << (r-1)*(r-1) + c << endl; 
        }
        else
        {
            if (c%2 == 0)
                cout << (c-1)*(c-1) + r << endl;
            else
                cout << (c*c)-r+1 << endl;
            
        }
    }

    
    
}