#include <bits/stdc++.h>

using namespace std; 

int main (){

    int n, m, ans, t;

    queue<int> q; 
    priority_queue<int> pq; 

    cin >> t; 

    while(t--){

        cin >> n >> m; 

        for(int i=0; i<n; i++){
            cin >> ans;
            q.push(ans); 
            pq.push(ans); 
        }

        int cont = 0; 

        while(!q.empty()){

            //cout << pq.top() << " " << q.front() <<  " " << m <<endl; 

            if(pq.top() == q.front())
            {
                q.pop();
                pq.pop(); 
                cont++;
                if(m == 0)
                {
                    cout << cont << endl; 
                    break;  
                }
                m--; 
            }
            else
            {
                q.push(q.front()); 
                q.pop(); 
                if(m == 0){
                    m = q.size() - 1; 
                }
                else{
                    m--; 
                }
            }
        }
        while(!q.empty())
        {
            q.pop(); 
            pq.pop(); 
        }
    }
}