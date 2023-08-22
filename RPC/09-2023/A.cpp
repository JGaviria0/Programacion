#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);
	int h, k, v, s;

    cin >> h >> k >> v >> s; // 3 2 3 2 

    long long cont = 0; 

    while(h > 0 ) { // 2
        v += s; //4
        v -= max(1, v/10); //3

        if(v >= k) h++; 

        if (0 < v && v < k) {
            h--; 
            if(h == 0) v = 0; 
        }; 

        if(v <= 0){
            h =0; 
            v=0; 
        }

        cont+= v; 

        if(s>0) s--; 

    }

    cout << cont << endl; 
}