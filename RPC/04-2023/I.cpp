#include <bits/stdc++.h>

using namespace std; 

const int maxi = 1000006; 
 
long long number[maxi], tree[4*maxi];
 
void build(int i, long long b, long long e){
 
    if(b == e)
        tree[i] = number[b]; 
    else
    {
        long long mid = (b+e)/2, left = i*2, right = left + 1; 
        build(left, b, mid); 
        build(right, mid+1, e); 
    }
}
 
long long query(int i, long long b, long long e, long long l){
 
    if(b>l || l > e) return 0;
 
    if(l == b && l == e) 
        return tree[i]; 
    else
    {
        long long mid = (b+e)/2, left = i*2, right = left + 1;
        return tree[i] + query(left, b, mid, l) + query(right, mid+1, e, l);
    }
}
 
void update(int i, long long b, long long e, int a, int be, int k){
 
    if(b>be || a > e) return; 
 
    if(b>=a && e<=be) 
        tree[i] += k; 
    else
    {
        long long mid = (b+e)/2, left = i*2, right = left + 1;
        update(left, b, mid, a, be, k);
        update(right, mid+1, e, a, be, k); 
    }
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int n, m; 

    cin >> n >> m;

    for(int i=0; i<maxi; i++)
        number[i] = 0;

    long long sum = 0; 

    build(1, 0, maxi);

    for(int i=0; i<n; i++){
        int aux = 0; 
        cin >> aux; 
        sum += -aux;
        if (sum < 0) sum = 0; 
        int patinan = sum/5; 

        update(1,0,maxi-1,0,patinan,1);

    }

    for(int i=0; i<m; i++){
        int aux = 0; 

        cin >> aux; 

        cout << query(1, 0, maxi-1, aux) << " "; 
    }

    cout << endl; 
}