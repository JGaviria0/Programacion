#include <bits/stdc++.h>

using namespace std;

int main (){

    int n, t, m, a[30004], b[30004], aux[30004];

    set<int> q; 

    string lineignore; 
    cin >> t; 

    while(t--){
        cin.ignore(); 
        getline(cin, lineignore); 

        cin >> m >> n; 

        //cout << m << " " << n << endl; 

        for(int i=0; i<m; i++)
            cin >> a[i];

        for(int i=0; i<n; i++) 
            cin >> b[i]; 

        int i=0, j=0, k=0; 
        
        while(i<=m && j<n){

            if(i < b[j])
            {
                q.insert(a[i]);  
                i++; 
            }
            else
            {
                auto it = q.begin(); 
                cout << *it+i << endl;
                k++; 
                j++; 
            }
        }
        if(t != 0)
            cout << endl;
    }
}