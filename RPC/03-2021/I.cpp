#include <bits/stdc++.h>

using namespace std; 

int main () {

    int n, vec[1000006]; 
    unordered_map <int, int> sub; 
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> vec[i]; 
    }

    int i = 0, cont = 0, aux = 0, ans = 0; 
    

    // for(int j =0; j<7; j++) {
    while(i<n){
        cout << i << endl;
        auto fin = sub.find(vec[i]);
        if(fin == sub.end()){
            sub[vec[i]] = i;
            cout <<"hola"<< sub[vec[i]] <<  endl; 
            cont++; 
            aux++;
            i++;
        } else {
            cout << "na" << endl;
            //cout << aux << endl;
            aux = 0;
            i = sub[fin->second] + 2;

            for(auto j : sub ) {
                cout << j.first  << " " << j.second << endl;
            }
            sub.clear();
            sub[vec[sub[fin->second] + 1 ]] = sub[fin->second] + 1; 
        }
    } 
    for(auto j : sub ) {
        cout << j.first  << " " << j.second << endl;
    } 
    //cout << aux << endl;
}