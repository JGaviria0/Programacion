#include <bits/stdc++.h>

using namespace std; 

const int inf = 10000007;

bool solve(vector<string>& moves, int x, int y) {
    if( (moves[0] == "NORTH" && moves[1] ==  "SOUTH") || (moves[1] == "NORTH" && moves[0] ==  "SOUTH")) {
        if(x == y) {
            return false; 
        }
    }
    if( (moves[0] == "WEST" && moves[1] ==  "EAST") || (moves[1] == "WEST" && moves[0] ==  "EAST")) {
        if(x == y) {
            return false; 
        }
    }

    moves.s
    return true; 
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);

    vector<vector<int>> matrix ;

    solve(matrix);
    

    return 0; 
}