/*  
https://cses.fi/problemset/task/1755
Metodo: Implementacion simple
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std;

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int n, odd = 0, even = 0;
    string  st, oddChar, ans, ans2; 
    map<char, int> abc; 
    pair<char, int>oddPair; 

    cin >> st; 

    n = st.size(); 

    for(int i=0; i<n; i++)
    {
        if(abc[st[i]] != 0)
        {
            abc[st[i]]++;
            if(abc[st[i]]%2 == 0)
            {
                odd--;
                even++; 
            }
            else
            {
                odd++; 
                even--; 
            }  
        }
        else
        {
            abc[st[i]] = 1;
            odd++; 
        }
    }

    if((n%2 == 0 && odd == 0) || (n%2 != 0 && odd == 1))
    {
        for (auto i: abc){
            if(i.second%2 == 0)
            {
                for(int j=0; j<i.second/2; j++){
                    cout << i.first;
                }
                    
            }
            else{
                oddChar = i.first;
                oddPair = i; 
            }
        }
 

        if(oddChar.size() == 1)
        {
            for(int j=0; j<oddPair.second; j++)
                    cout << oddPair.first; 
        }

        for (auto i = abc.rbegin(); i != abc.rend(); ++i){
            
            if(i->second%2 == 0)
            {
                for(int j=0; j<i->second/2; j++){
                    cout << i->first;   
                }
            }
        }
        
    }
    else
    {
        cout << "NO SOLUTION" << endl; 
    }
}