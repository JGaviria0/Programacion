#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m, i, j,max,cont=0;
    int respuesta[102];
 
    cin >> n >> m;
 
    char notas[n+5][m+5];
 
    for (i=1;i<=n;i++)
    {
        cin >> notas[i];
    }
        
    for(i=0;i<m;i++)
    {
        max = 1;
        for(j=2;j<=n;j++)
        {
            if (notas[max][i] < notas[j][i])
                max = j;
        }
 
        for(j=1;j<=n;j++)
        {
            if (notas[max][i] == notas[j][i])
                respuesta[j] = 1;
        }
        
    }
 
    i = 1;
 
    while(respuesta[i] == 1)
    {
        i++;
        cont++;
    }
 
    cout << cont << endl;
        
 
    return 0;
}