#include <bits/stdc++.h>

using namespace std; 

int main(){

    int n, x=0, y=0, cont =0, side= 0, side2=0, j=0; 
    string move; 

    cin >> n >> move;


    for(int i =0; i<n; i++)
    {
        if(move[i] != 'U'){
            x++;
            j++;
            if(i==0){
                side2 = 1; 
                side = 2; 
            }
                
        }  
        else{
            y++;
            
            if(i==0)
            {
                side2 = 2; 
                side = 1;
            }      
        }

        if (y != j)
        {
            //cout << x << " " << y << "  " << j<< endl;
            if (y>j)
                side = 1; 
            else 
                side = 2; 
        }
            
        if (side == side2)
        {
            cont++;
            if(side == 1)
                side2 = 2; 
            else 
                side2 = 1;   
        }   
    }

    cout << cont << endl;
}