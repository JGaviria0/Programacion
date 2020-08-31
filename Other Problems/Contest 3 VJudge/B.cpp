#include <bits/stdc++.h>

using namespace std;

int main () {

    
    long long money, n[4], p[4], cont = 0, aux, ans = 0;
    char aux2; 
    string burger; 
    map<char, int > ingre; 
    bool flag;

    cin >> burger; 

    for(int i=0; i<burger.size(); i++) {
        ingre[burger[i]]++; 
    }

    for(int i =0; i<3; i++) cin >> n[i]; 

    for(int i =0; i<3; i++) cin >> p[i]; 

    cin >> money; 

    flag = true; 

    while(n[0] != -1 && n[2] != -1 && n[1] != -1 && money != -1) {

        int i =0;

        if (flag) {
            for(auto j : ingre) {
                if (j.first == 'B') i = 0; 
                if (j.first == 'C') i = 2;
                if (j.first == 'S') i = 1;

                if(n[i] - j.second > 0) {
                    n[i] -= j.second; 
                } else {
                    aux = abs(n[i] - j.second);
                    aux *= p[i]; 
                    if (money - aux < 0) {
                        n[i] = -1;
                        money = -1; 
                        break; 
                    } else {
                        n[i] = 0; 
                        money -= aux;
                        if (j.first == 'S') flag = false; 
                    }     
                } 
            }
            if(money!=-1)
                cont++; 
        } else {
            
            aux = 0; 

            int maxi = -2; 

            for(auto j : ingre) {
                if(maxi < j.second) {
                    maxi = j.second; 
                    aux2 = j.first; 
                }
            }

            int aux3;
            if (aux2 == 'B') i = 0; 
            if (aux2 == 'C') i = 2;
            if (aux2 == 'S') i = 1;
            
            if (ingre[aux2] % n[i] != 0) {
                money -= (ingre[aux2] % n[i]) * p[i]; 
                n[i] += ingre[aux2] % n[i];
                if(money < 0) {
                    money = -1;
                    break;  
                }
            }

            aux3 = ingre[aux2] / n[i];

            for(auto j : ingre) {
                if (j.first == 'B') i = 0; 
                if (j.first == 'C') i = 2;
                if (j.first == 'S') i = 1;

                money -= ((aux3*j.second) - n[i])*p[i]; 
                n[i] = 0; 
                if(money < 0) {
                    money = -1;
                    break;  
                }
            }
            if(money == -1)
                break; 

            cont += aux3;  

            for(auto j : ingre) {
                if (j.first == 'B') i = 0; 
                if (j.first == 'C') i = 2;
                if (j.first == 'S') i = 1;

                
                aux = j.second * p[i]; 
                ans += aux; 
            }

            cont += money/ans; 

            n[1] = -1; 
        }
    }

    cout << cont << endl; 
}