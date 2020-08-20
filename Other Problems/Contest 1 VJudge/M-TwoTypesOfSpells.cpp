#include <bits/stdc++.h>

using namespace std; 

int main (){

    int n, k, m, spell, power, KAdd, RestAdd; 

    multiset<int> theK, theRest; 

    cin >> n; 

    KAdd =  RestAdd =0; 

    while(n--){
        
        cin >> spell >> power; 

        if (spell == 0){
            if(power > 0){
                if( power > -*theK.begin()){
                    theRest.insert(- *theK.begin()); 
                    KAdd -= - *theK.begin();
                    RestAdd += - *theK.begin();
                    theK.erase(theK.begin()); 
                    theK.insert( - power); 
                    KAdd += power; 
                }
                else
                {
                    theRest.insert(power); 
                    RestAdd += power; 
                }
            }
            else
            {
                /* code */
            }
            
        }
    } 
}