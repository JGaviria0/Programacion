#include <bits/stdc++.h>

using namespace std; 

long double puntosCP(long double g[], long double f){
    long double a = g[1];
    long double b = g[2];
    long double c = g[3] - f;
    long double ans ;
    if (a != 0) {
        ans = (-b + sqrt(b*b - 4*a*c))/(2*a);
    } else {
        ans = - c / b; 
    }
    return ans; 
}

long double puntosCN(long double g[], long double f){
    long double a = g[1];
    long double b = g[2];
    long double c = g[3] - f;
    long double ans;
    
    ans = (-b - sqrt(b*b - 4*a*c))/(2*a);

    return ans;
}

long double integralgs(long double n[], long double u, long double l){
    long double a = n[1];
    long double b = n[2];
    long double c = n[3];

    long double upperL = ((a*u*u*u)/3) + ((b*u*u)/2) + (c*u);
    long double lowerL = ((a*l*l*l)/3) + ((b*l*l)/2) + (c*l);

    long double ans = upperL - lowerL;

    return ans;
}

int main () {
    ios::sync_with_stdio(0);cin.tie(0);
    int fs, gs;
    vector<pair<long double,long double>> f;
    long double g[505][5];
    long double aux, aux2;
    
    cin >> fs; 

    for(int i=0; i<fs; i++) {
        cin >> aux >> aux2; 
        f.push_back(make_pair(aux, aux2));
    }

    cin >> gs; 

    for(int i=0; i<gs; i++) {
        cin >> g[i][0] >> g[i][1] >> g[i][2] >> g[i][3];
    }

    long double a = 0.0, b;
    int i = 0, j = 0; 
    long double ans = 0.0; 
    while(i < gs && j < fs){
        bool flag;
        if(g[i][0] < f[j].first){
            b = g[i][0];
            flag = true; 
        } else {
            b = f[j].first;
            flag = false; 
        }

        if (g[i][1] != 0){
            long double corteP = puntosCP(g[i], f[j].second);
            long double corteN = puntosCN(g[i], f[j].second);

            if(corteN >= a && corteN <= b) {
                ans += abs((f[j].second*abs(corteN - a)) - integralgs(g[i], corteN, a));
                
                if(corteP >= a && corteP <= b) {
                    ans += abs((f[j].second*abs(corteP - corteN)) - integralgs(g[i], corteP, corteN));
                    ans += abs((f[j].second*abs(b - corteP)) - integralgs(g[i], b, corteP));

                } else {
                    ans += abs((f[j].second*abs(b - corteN)) - integralgs(g[i], b, corteN));
                }
            } else {
                if(corteP >= a && corteP <= b) {
                    ans += abs((f[j].second*abs(corteP - a)) - integralgs(g[i], corteP, a));
                    ans += abs((f[j].second*abs(b - corteP)) - integralgs(g[i], b, corteP));
                } else {
                    ans += abs((f[j].second*abs(b - a)) - integralgs(g[i], b, a));
                }
            }
        } else {
            long double corteP = puntosCP(g[i], f[j].second);
            if(corteP >= a && corteP <= b) {
                ans += abs((f[j].second*abs(corteP - a)) - integralgs(g[i], corteP, a));
                ans += abs((f[j].second*abs(b - corteP)) - integralgs(g[i], b, corteP));
            } else {
                ans += abs((f[j].second*abs(b - a)) - integralgs(g[i], b, a));
            }
        }

        a = b; 
        if (flag) {
            i++;     
        } else {
            j++;
        }
    } 
    
    printf("%.13Lf\n", ans);
    return 0; 
}