#include <bits/stdc++.h>

using namespace std;

int main (){

    int n, t, m, a[30004], b[30004], aux[30004];

    priority_queue<int> men, may;

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

        int i=1, j=0, k=0; 
        men.push(a[0]); 
        may.push(-2000000006);
        
        while(i<=m && j<n){

            if(i < b[j])
            {   
                if( men.top() <= a[i])
                {
                    may.push(-a[i]);
                }  
                else{
                    int aux = - may.top(); 
                    int aux2 = men.top(); 
                    may.push(-men.top()); 
                    men.pop();
                    men.push(a[i]); 
                    //cout << aux << " <---- " << men.top() <<" ----> " << aux2 << endl; 
                }
                i++; 
                
            }
            else
            {
                cout << men.top() << endl; 
                if(!may.empty()){
                    men.push(-may.top());
                    may.pop(); 
                }
                k++; 
                j++; 
            }
        }
        if(t != 0)
            cout << endl;
        while(!men.empty())
            men.pop();
        while(!may.empty())
            may.pop();
    }
}