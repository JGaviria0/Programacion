#include <bits/stdc++.h>

using namespace std; 

map<string, int> spell; 

int main (){

    int n, tipe, num, numAux;
    long long sum = 0; 
    string  numstring, numstringAux;
    bool flag = false; 

    cin >> n; 

    while(n--){

        cin >> tipe >> num; 
        numstring = to_string(num); 
        if(tipe == 0)
        {
            if(num > 0){
                if (flag){
                    flag = false; 
                    spell[numstringAux] += num;
                    sum += num;   
                } 
                spell[numstring] = num;
                sum += num; 
            }
            else
            {
                
            }
        }
        else
        {
            if(num > 0){
                if (flag){
                    spell[numstringAux] += num;
                    sum += num;   
                }
                flag = true; 
                numstringAux = numstring; 
                spell[numstring] = num;
                sum += num; 
            }
            else
            {
                /* code */
            }
            
        }
    }
}