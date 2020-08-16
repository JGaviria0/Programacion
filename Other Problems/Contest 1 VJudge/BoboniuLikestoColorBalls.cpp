#include <bits/stdc++.h>

using namespace std; 

bool look(int a, int b, int c, int d)
{
    if ((a%2 + b%2 + c%2 + d%2) > 1)  
        return false;
    else
        return true; 
}


int main(){

    int r, b, w, g, t; 

    cin >> t; 

    while(t--){ 

        cin >> r >> g >> b >> w; 

        if(look(r,g,b,w)) 
            cout << "YES" << endl;
        else if(r>0 && g>0 && b>0 && look(r-1,g-1,b-1,w-1))
            cout << "YES" << endl; 
        else
            cout << "NO" << endl;       
    }  
}