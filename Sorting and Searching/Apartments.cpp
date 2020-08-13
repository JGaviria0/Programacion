/*  
https://cses.fi/problemset/task/1084
Metodo: Sorting and Searching
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int main (){

    ios::sync_with_stdio(0); cin.tie(0);

    int n, m, k, applicant[200005], apartment[200005]; 

    cin >> n >> m >> k; 

    for(int i=0; i<n; i++)
        cin >> applicant[i];

    sort(applicant, applicant + n); 
    
    for(int i=0; i<m; i++)
        cin >> apartment[i];
    
    sort(apartment, apartment + m);

    int i = 0, j = 0, cont= 0; 

    while(i<n && j < m){
        // cout << applicant[i] << " " << apartment[j] << "                " 
        // << applicant[i]+k << " <= " <<apartment[j] << " <= "<< applicant[i]-k << " " << 
        // i << " " << j <<endl; 
        if(applicant[i]+k >= apartment[j] && applicant[i]-k <= apartment[j]){
            i++; 
            j++; 
            cont++; 
        }
        else{
            if(apartment[j] < applicant[i])
                j++; 
            else
                i++; 
        }   
    }
    cout << cont << endl; 
}