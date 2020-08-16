#include<bits/stdc++.h>
 
using namespace std;
 
int main (){
 
    int n, m, aux, cont = 0, vector[200005]; 
 
    cin >> n >> m; 
 
    for(int i=0; i<n; i++)
    {
        cin >> aux;
        vector[i] = aux*-1;  
    }
        
 
    aux = vector[m-1];  
 
    sort(vector, vector+n); 

    int ans2 = upper_bound(vector, vector+n, 0) - vector; 

    int ans = upper_bound(vector, vector+n, aux) - vector; 

    if (ans - ans2 > 0) 
        cout << ans - ans2 << endl;
    else
        cout << "0" << endl; 
 
    return 0; 
}