/*  
https://cses.fi/problemset/task/1092/
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int n, add, cont , v, ans[1000006];
bool flag = true; 

int sets(int i, int sum){
    if (flag)
    {
        if (i > n+1) return 0; 

        if (sum > add/2) return 0; 

        if(sum == add/2) {
            flag = false;  
            return 1;
        } 

        
        
        if((sets(i+1, sum +i)) == 1)
        {
            cout << i << " "; 
            return 1;  
        }
        if (sets(i+1, sum));
        {
            cout << i << " "; 
        }
        
        return 0; 
    }
    else
    {
        return 0; 
    }
     
}

int main (){

    cin >> n; 

    add = n*(n+1)/2; 

    if(add %2 != 0)
        cout << "NO" << endl;
    else{
        sets(1, 0); 

        // for(int i=1; i<=n; i++)
        //     cout << ans[i] << " "; 
    } 


}