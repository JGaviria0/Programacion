#include <bits/stdc++.h>

using namespace std; 

int main (){

    int n, a[1004], aux, m; 
    bool flag = true, flag2 = true, ans=true;  
    stack <int > s, q; 

    while(flag){
        
        cin >> n;
        
        if(n == 0){
            flag = false; 
            continue; 
        }
        flag2 = true;
        
        while (flag2)
        {
            cin >> aux;


            if(aux == 0){
                flag2 = false; 
                cout << endl; 
                continue; 
            }

            ans = true;
            m = n; 

            q.push(aux);  
            for(int i=1; i<n; i++)
            {
                cin >> aux; 
                q.push(aux);
            }

            while(m>1){

                if(!q.empty() && q.top() == m)
                {
                    q.pop();
                    m--; 
                } 
                else
                {
                    if(!s.empty() && s.top() == m)
                    {
                        m--; 
                        s.pop(); 
                    }
                    else if(!q.empty())
                    {
                        s.push(q.top());
                        q.pop();
                    }
                    else
                    {
                        cout << "No" << endl;
                        ans = false;  
                        break; 
                    }
                } 
            }
            if(ans)
                cout << "Yes" << endl; 
            while(!q.empty())
                q.pop(); 
            while (!s.empty())
            {
                s.pop();
            }
        }
    }
}