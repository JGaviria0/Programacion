#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m; 
    string name, number, aux, aux2, aux21; 
    map <string,string> server; 

    cin >> n >> m; 

    for(int i =0; i<n; i++)
    {
        cin >> name >> number;
        server[number] = name; 
    }

    for(int i =0; i<m; i++)
    {
        cin >> aux >> aux2;
        aux21 = aux2.substr(0,aux2.size()-1); 
        cout << aux << " " << aux2 << " #" << server[aux21] << endl; 
        
    }
}