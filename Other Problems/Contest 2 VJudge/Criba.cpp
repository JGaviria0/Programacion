#include <bits/stdc++.h>

using namespace std; 

int main(){

    int a[1000006]; 
    vector<int> primos; 


    for(int i=2; i<1000006; i++)
    {
        if(a[i] == 0)
        {
            for(int j =i; j<1000006; j++)
            {
                a[j] = 1; 
            }
        }
    }
}