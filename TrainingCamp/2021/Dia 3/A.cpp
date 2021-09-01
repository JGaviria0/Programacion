#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int x , y; 

    cin >> x >> y ;
    bool flag = true; 
    bool turn = true;  
    while(flag){
        int cont = 0;
        if(turn){
            //cout << "c" << endl;
            if(x>=2){
                cont += 20; 
                x -=2; 
            } else if (x>=1) {
                cont += 10; 
                x -=1; 
            } 

            if(y >= 22 - cont ){
                y -= 22 - cont; 
            } else {
                cout << "Hanako" << endl;
                return 0; 
            }
            //cout << x << " " << y << endl;
            turn = false; 
        } else {
            //cout << "h" << endl;
            turn = true;
            if (y - 22 < 0){
                if(y - 12 < 0){
                    if(x >= 2){
                        cont +=20; 
                        x -= 2; 
                    } else if (x>=1) {
                        cont += 10; 
                        x -=1; 
                    } else {
                        cout << "Ciel" << endl;
                        return 0;
                    }
                } else {
                    if (x>=1) {
                        cont += 10; 
                        x -=1; 
                    } else {
                        cout << "Ciel" << endl;
                        return 0; 
                    } 
                }

                if(y >= 22 - cont ){
                    y -= 22 - cont; 
                } else {
                    cout << "Ciel" << endl;
                    return 0; 
                }
            } else {
                y -= 22;
            }
            //cout << x << " " << y << endl;

        }
    }

    return 0; 
}
