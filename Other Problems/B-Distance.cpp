#include <bits/stdc++.h>

using namespace std; 

int main (){

    long long n,  cont=0, a, b, d;

    cin >> n >> d;


    while(n--){

        cin >> a >> b; 

        if( ((a*a) + (b*b)) <= (d*d))
            cont++;
    }

    cout << cont << endl; 
    
}