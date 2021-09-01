#include <bits/stdc++.h>

using namespace std;

const int inf = 10000007;
int n,r,c, a[2000006], t;
char matriz[10][10];
string wor;

int solve(int i, int j, int indexC, int ki){
    int x[] = { 0, -1, -1, 0, 1, 1, 1, 0, -1};
    int y[] = { 0, 0, -1, -1, -1, 0, 1, 1, 1};
    //cout << indexC << " " << wor.length() << endl;
    if (indexC > wor.length() - 1) return 0;


    if (i+y[ki] < r && i+y[ki] >=0 && j+x[ki] <c && j+x[ki] >=0){
        //cout << " -> " << matriz[i+y[ki]][j+x[ki]] << " " << wor[indexC];
        if(matriz[i+y[ki]][j+x[ki]] == wor[indexC]){
            //cout << "Melo" << endl;
            return solve(i+y[ki], j+x[ki], indexC+1, ki);
        }
    }

    for(int k=1; k<9; k++){
        int inv;
        if(k<=4) inv=k+4;
        else inv =k-4;
        if(ki==inv) continue;
        if (i+y[k] < r && i+y[k] >=0 && j+x[k] <c && j+x[k] >=0){
            //cout << i+y[k] << " " << j+x[k] << endl;

            if(matriz[i+y[k]][j+x[k]] == wor[indexC]){
                //cout << i << " " <<  j << " " << matriz[i+y[k]][j+x[k]] << " " << k << " " << endl;
                return 1+ solve(i+y[k], j+x[k], indexC+1, k);
            }
        }
    }

    return 0;
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);

    cin >> r >> c;

    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> matriz[i][j];
        }
    }

    cin >> t;
    cin >> wor;

    for (int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            if(wor[0] == matriz[i][j]){
                //cout <<  matriz[i][j] << i << j <<  endl;
                int aux = solve(i,j, 1, 0);
                //cout << aux -1 << endl;
                if (aux - 1 == t){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "No" << endl;
    return 0;
}