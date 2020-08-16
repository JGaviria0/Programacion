#include <bits/stdc++.h>

using namespace std; 

int main(){

    int t, n, m, c, vTime[10004], tiempo; 
    string vSide[10003]; 
    queue <int> ql, qr;
    int all[10004];

    cin  >> c;  

    while(c--){

        bool side = false; 
        tiempo = 0; 

        cin >> n >> t >> m;

        for(int i=0; i<m; i++){
            cin >> vTime[i] >> vSide[i];
        
        }
        vTime[m] = 0; 

        int i = 0;

        while(i < m || !ql.empty() || !qr.empty()){
            while(vTime[i] <= tiempo && i<m){
                if(vSide[i] == "left")
                    ql.push(i); 
                else 
                    qr.push(i); 
                i++; 
            }
            if(ql.empty() &&  qr.empty()){
                tiempo = vTime[i]; 
            }
            else{
                int j = 0;
                tiempo += t;
                if(side)
                { 
                    side = false; 
                    if(!qr.empty())
                    {
                        while(j<n && !qr.empty()){
                            all[qr.front()] = tiempo;
                            qr.pop(); 
                            j++;
                        }
                    }
                }
                else
                {
                    side = true;
                    if(!ql.empty())
                    {
                        while(j<n && !ql.empty()){
                            all[ql.front()] = tiempo;
                            ql.pop(); 
                            j++;
                        } 
                    } 
                }
            }
        }
        for(int i=0; i<m; i++)
        {
            cout << all[i] << endl;
        }
        if(c != 0)
            cout << endl; 
    }
}