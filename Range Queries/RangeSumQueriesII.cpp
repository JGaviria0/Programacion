/*  
https://cses.fi/problemset/task/1648
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
        tree[i] = tree[left] + tree[right]; 
    }
}

long long query(int i, int b, int e, int l, int r){

    if(b>r || l > e) return 0; 

    if(b>=l && e<=r) 
        return tree[i]; 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1;
        return query(left, b, mid, l, r) + query(right, mid+1, e, l, r);
    }
}

void update(int i, int b, int e, int j, int k){

    if(j<b || j > e) return; 

    if(b == j && e == j) 
        tree[i] = k; 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1;
        update(left, b, mid, j, k);
        update(right, mid+1, e, j, k);
        tree[i] = tree[left] + tree[right]; 
    }
}

int main(){

    long long n, q, a, b, c; 

    cin >> n >> q; 

    for(int i=0; i<n; i++)
        cin >> number[i];
    
    build(1, 0, n-1);

    while (q--)
    {
        cin >> c >> a >> b;

        if (c == 1)
            update(1,0,n-1,a-1,b);
        else
            cout << query(1, 0, n-1, a-1, b-1) <<endl;
    } 
}