#include<bits/stdc++.h>

using namespace std;
int criba[1000006], primos[1000006], npri = 0;
int main() {

    int a, b;

    for(int i = 2; i<=1000000; i++) {
        if(criba[i] == 0) {
            primos[npri] = i;
            npri++;
            for(int j = i; j<=1000000; j += i) {
                criba[j] = 1;
            }
        }
    }

    while (cin >> a >> b && a !=  0 && b != 0) {
        int ans = lower_bound(primos, primos+npri, a) - primos;
        int ans2 = upper_bound(primos, primos+npri, b) - primos;
        cout << ans2 - ans << endl;
    }
}