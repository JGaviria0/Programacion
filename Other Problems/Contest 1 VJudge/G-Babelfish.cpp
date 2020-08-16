#include <bits/stdc++.h>

using namespace std; 

map<string , string> di; 

int main(){

    string aux, a, b;
    bool flag=true; 
    int stringEnd, cont=0; 
    
    while(flag)
    { 
        getline(cin, aux);
        if(aux == ""){
            flag = false;
        }
        else
        {
            for(int i=0; i<aux.size(); i++){
                if(aux[i] == ' '){
                    stringEnd = i; 
                    break; 
                }
            }

            a = aux.substr(0,stringEnd); 
            b = aux.substr(stringEnd+1, aux.size()-1);

            di[b] = a; 
        }
        cont++; 
    }
    flag = true;  
    
    while(flag)
    { 
        getline(cin, aux);
        if(aux == ""){
            flag = false;
        }
        else
        {
            if(di[aux] != "")
            {
                cout << di[aux] << endl; 
            }
            else
                cout << "eh"<< endl;
        }
             
    }
    
}