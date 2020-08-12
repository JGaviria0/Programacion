/*
http://lightoj.com/volume_showproblem.php?problem=1005
Metodo: DP
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>
#define endl '\n'

using namespace std;

long long pascal [35][35], Vfactoriales[35];

void triangulo(){
    for (int i=0; i<=30; i++)
    {
        pascal[i][0] = 1;
        pascal[i][i] = 1;
    }

    for (int i=2; i<=30; i++)
    {
        for (int j=1; j<i; j++)
            pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
    }

    Vfactoriales[0] = 1;

    for (int i=1; i<=30; i++)
        Vfactoriales[i] = Vfactoriales[i-1] * i;
}


int main (){

    triangulo();

    long long n, t, k;
    cin >> t;

    for (int i=1;  i<=t; i++)
    {
        cin >> n >> k;

        if (k > n)
            cout << "Case " << i << ": 0" << endl;
        else 
            cout << "Case " << i << ": " << pascal[n][k]*pascal[n][k]*Vfactoriales[k] << endl;
    }
}