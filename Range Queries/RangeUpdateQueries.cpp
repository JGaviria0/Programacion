/*  
https://cses.fi/problemset/task/1651
Metodo: segment tree
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

const int maxi = 4e5; 

long long number[maxi], tree[maxi];

void build(int i, int b, int e){

    if(b == e)
        tree[i] = number[b]; 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1; 
        build(left, b, mid); 
        build(right, mid+1, e);    
    }
}

long long query(int i, int b, int e, int l){

    if(b>l || l > e) return 0;

    if(l == b && l == e) 
        return tree[i]; 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1;
        return tree[i] + query(left, b, mid, l) + query(right, mid+1, e, l);
    }
}

void update(int i, int b, int e, int a, int be, int k){

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

int main(){

    long long n, q, a, b, c, d; 

    cin >> n >> q; 

    for(int i=0; i<n; i++)
        cin >> number[i];
    
    build(1, 0, n-1);

    // for(int i=0; i<n*2; i++)
    //     cout << tree[i] << " ";
    while (q--)
    {
        cin >> c >> a;

        if (c == 1){
            cin >> b >> d; 
             update(1,0,n-1,a-1,b-1,d);
            // for(int i=0; i<n*2; i++)
            //     cout << tree[i] << " ";
        }
        else
            cout << query(1, 0, n-1, a-1) << endl;
    } 
}