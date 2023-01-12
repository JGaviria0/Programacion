#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    int a, b, c, d;
    pair<int, int> player1, player2;  
    while(cin >> a >> b >> c >> d && a != 0 && b != 0 && c != 0 && d != 0){
        player1 = { max(a, b), min(a, b)};
        player2 = { max(c, d), min(c, d)};
        bool player1pair = false, player2pair = false; 

        if(player1 == player2){
            cout << "Tie.\n";
        } 
            continue;

        if(player1 == make_pair(2,1)){
            cout << "Player 1 wins.\n";
            continue;
        }

        if(player2 == make_pair(2,1)){
            cout << "Player 2 wins.\n";
            continue;
        }
        
        cout << "Player "; 

        if(a == b){
            player1pair = true; 
        }

        if(c == d){
            player2pair = true; 
        }

        if(player1 > player2){
            if(player2pair && !player1pair) cout << 2;
            else cout << 1;
        }

        if(player1 < player2){
            if(!player2pair && player1pair) cout << 1;
            else cout << 2;
        }

        cout << " wins.\n";

    }
    
}