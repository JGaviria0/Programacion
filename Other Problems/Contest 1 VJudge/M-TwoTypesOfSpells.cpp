#include <bits/stdc++.h>

using namespace std; 

int n, k, m, spell, power, KAdd, RestAdd, minLight; 

multiset<int> theK, theRest, light;

// ADD

void addKElement1(int n){
    KAdd += n; 
    theK.insert(n);
}

void addRestElement1(int n){
    RestAdd += n; 
    theRest.insert(- n);
    theK.insert(-*theRest.begin());
    KAdd += - *theRest.begin();
    RestAdd -= -*theRest.begin();
    theRest.erase(theRest.begin());
}

void addKElementNo1(int n){
    KAdd += n; 
    theK.insert(n); 
    KAdd -= *theK.begin(); 
    RestAdd += *theK.begin();
    theRest.insert (- *theK.begin()); 
    theK.erase(theK.begin()); 
}

void addRestElementNo1 (int n){
    RestAdd += n;
    theRest.insert(-n); 
}

// ERASE

void eraseKElementNo1 (int n){
    KAdd -= n; 
    theK.erase(theK.find(n));
    theK.insert(- *theRest.begin());
    KAdd +=- *theRest.begin();
    RestAdd -= - *theRest.begin();
    theRest.erase(theRest.begin()); 
}

void eraseKElement1 (int n){
    KAdd -= n;
    theK.erase(theK.find(n));
}

void eraseRestElementNo1 (int n){
    RestAdd -= n; 
    theRest.erase(theRest.find(- n)); 
}

void eraseRestElement1 (int n){
    RestAdd -= n;
    theRest.erase(theRest.find(- n)); 
    RestAdd += *theK.begin(); 
    KAdd -= *theK.begin();
    theRest.insert(-*theK.begin());
    theK.erase(theK.begin()); 
}

void eraseLigthElement (int n){
    light.erase(light.begin()); 
    if (theK.find(*light.begin()) != theK.end())
        eraseRestElement1(*light.begin()); 
    else
        eraseKElement1(*light.begin()); 
}

int main (){

    cin >> n; 

    KAdd =  RestAdd =0;   

    while(n--){
        
        cin >> spell >> power;

        if (spell == 0){
            if(power > 0){
                if(light.empty())
                    addRestElementNo1(power); 
                else if(theK.empty()){
                    KAdd += power; 
                    theK.insert(power); 
                }
                else if (power > *theK.begin())
                    addKElementNo1 (power); 
                else
                    addRestElementNo1 (power); 
            }
            else
            {
                if(theRest.find(power) == theRest.end())
                    eraseKElementNo1(- power);  
                else
                    eraseKElementNo1( - power);     
            } 
        }
        else
        {
            if(power > 0){
                if(light.empty()){
                    light.insert(power); 
                    if(!theRest.empty())
                    {
                        addKElement1(- *theRest.begin());
                        RestAdd -= - *theRest.begin(); 
                        theRest.erase(theRest.begin());
                    }
                }
                else if(power < *light.begin()){
                    if(*light.begin() > *theK.begin())
                        addKElement1(*light.begin());
                    else
                        addRestElement1(*light.begin());
                    light.insert(power);  
                }
                else
                {
                    if(power > *theK.begin())
                        addKElement1(power);
                    else
                        addRestElement1(power);
                    light.insert(power);  
                }
            }
            else
            {
                if(- power == *light.begin())
                {
                    light.erase(light.begin()); 
                    if (!theK.empty())
                    {
                        if(light.empty())
                        {
                            addRestElementNo1(*theK.begin());
                            eraseKElement1(*theK.begin());  
                        }
                        else if(theK.find(*light.begin()) == theK.end())
                            eraseRestElement1(*light.begin()); 
                        else
                            eraseKElement1(*light.begin()); 
                    }
                }
                else
                {
                    if(theK.find(-power) == theK.end())
                        eraseRestElement1(-power); 
                    else 
                        eraseKElement1(-power); 
                }
            }
        }
        cout << KAdd*2 + RestAdd + *light.begin() << endl; 
        //cout << " Restadd = " << RestAdd << "           kadd = " << KAdd << "           Rest.f = " << - *theRest.begin()
        //<< "           k.fi = " << *theK.begin() << "           Ans = " << KAdd*2 + RestAdd + *light.begin()<< endl; 
    } 
}