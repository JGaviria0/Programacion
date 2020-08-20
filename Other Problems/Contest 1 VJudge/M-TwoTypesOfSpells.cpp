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

                if( !theK.empty() && power > *theK.begin())
                {
                    theRest.insert( - *theK.begin()); 
                    KAdd -=  *theK.begin();
                    RestAdd +=  *theK.begin();
                    theK.erase(theK.begin()); 
                    theK.insert(power); 
                    KAdd += power; 
                }
                else
                {
                    theRest.insert(- power); 
                    RestAdd += power; 
                }
            }
            else
            {
                if(theRest.find(power) == theRest.end())
                {
                    RestAdd -= - power; 
                    theRest.erase(theRest.find(power)); 
                }
                else
                {
                    KAdd += power; 
                    theK.erase(theK.find(- power)); 
                    theK.insert( - *theRest.begin());
                    RestAdd -= *theRest.begin();
                    KAdd += *theRest.begin();
                    theRest.erase(theRest.begin()); 
                }
                
            } 
        }
        else
        {
            if(power > 0){
                if(theRest.empty())
                {
                    RestAdd += power; 
                    theRest.insert(- power); 
                }
                else if(power <  - *theRest.begin())
                {
                    RestAdd += power; 
                    theRest.insert(power);
                    RestAdd -= - *theRest.begin();
                    KAdd += -*theRest.begin();
                    theK.insert(- *theRest.begin());
                    theRest.erase(theRest.begin()); 
                }
                else
                {
                    KAdd += power;
                    theK.insert(power);
                }
            }
            else
            {
                if(theK.find(- power) != theK.end())
                {
                    RestAdd -= - power; 
                    theRest.erase(theRest.find(power)); 
                    KAdd -= *theK.begin(); 
                    RestAdd += *theK.begin(); 
                    theRest.insert(*theK.begin());
                    theK.erase(theK.begin()); 
                }
                else
                {
                    KAdd -= - power;
                    theK.erase(theK.find(- power)); 
                }
            }
        }
        cout << " Restadd = " << RestAdd << "           kadd = " << KAdd << "           Rest.f = " << - *theRest.begin()
        << "           k.fi = " << *theK.begin() << "           Ans = " << KAdd*2 + RestAdd<< endl; 
    } 
}