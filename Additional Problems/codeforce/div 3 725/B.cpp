#include <iostream>

int main () {

    int t; 
    int n, ans, res, i, j;
    int cont;
    scanf("%d", &t);
    while (t--) {
        int a[200005];
        ans = 0; 
        cont = 0;

        scanf("%d", &n);
        for(i=0; i< n; i++) {
            scanf("%d", &a[i]);
            cont += a[i];
        } 

        if (cont%n == 0 ) {
            res = cont/n; 

            for(j=0; j < n; j++) {
                if (a[j] > res) {
                    ans++; 
                }
            } 
            printf("%d\n" , ans);
        } else {
            printf("-1\n");
        }
    }
}