/*  
https://cses.fi/problemset/task/1092/
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

long long n, cont , v, ans[4000006], aux, aux2, add;  

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n; 

    add = n*(n+1)/2; 

    if(add %2 != 0)
        cout << "NO" << endl;
    else{ 
        cout << "YES" << endl;
        cont = 0; 
        aux = add/2;
        aux2 = 0;  
        int i = n; 
        while(i>0 && aux2 < aux)
        {
            //cout << aux2 << " " << aux << endl; 
            if( aux - i - aux2 < i && aux - i - aux2 != 0)
            {
                ans[i] = 1;  
                ans[aux - i - aux2] = 1;
                aux2 += i; 
                cont +=2; 
                break;  
            }
            else
            {
                ans[i] = 1;
                aux2 += i; 
                cont++;  
            }
            i--; 
        }
        cout << cont << endl;
        for (int i=1; i<=n; i++)
        {
            if(ans[i] == 1)
                cout << i << " "; 
        }
        cout <<endl << n - cont << endl; 

        for (int i=1; i<=n; i++)
        {
            if(ans[i] == 0)
                cout << i << " "; 
        }
        cout << endl; 
    } 
}