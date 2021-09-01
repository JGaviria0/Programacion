#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

char abc[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

void cambio(char a, char b){
    bool findA = false, findB = false; 
    int i = 0; 
    int posA, posB; 
    while(!findA || !findB){
        if(abc[i] == a){
            posA = i; 
            findA = true; 
        }
        if(abc[i] == b){
            posB = i; 
            findB = true;
        }
        i++;
    }

    if(posA < posB){
        i = posA; 
        bool flag = false; 
        while(abc[i] != b){
            if (flag){
                abc[i-1] = abc[i];
            }
            if (abc[i] == a){
                flag = true; 
            }
            i++;
        }
        abc[i] = a; 
        abc[i-1] = b;
    }
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int n; 
    string s[1000]; 
    cin >> n; 
    cin >> s[0]; 

    map <char, int> letras; 

    for(int i=1; i<n ;i++){
        cin >> s[i]; 
        for(int j=0; j<min(s[i].length(), s[i-1].length()); j++){
            if(s[i][j] != s[i-1][j]){
                if(letras[s[i-1][j]] == 0){
                    cambio(s[i][j], s[i-1][j]);
                    letras[s[i-1][j]]++;
                    break;
                } else{
                    cout << "Impossible" << endl;
                    return 0; 
                }
            }
        }
    }

    // cambio('a', 'f');
    // cambio('e', 'a');
    // cambio('d', 'f');

    for(int i=0; i<26; i++){
        cout << abc[i];
    }
    cout << endl;


    

    return 0; 
}
