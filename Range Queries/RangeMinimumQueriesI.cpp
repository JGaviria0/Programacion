/*  
https://cses.fi/problemset/task/1647
Metodo: segment tree
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

const int maxi = 4e5, oo = 1e9;

long long number[maxi], tree[maxi];

void build(int i, int b, int e){

    if(b == e)
        tree[i] = number[b]; 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1; 
        build(left, b, mid); 
        build(right, mid+1, e); 
        tree[i] = min(tree[left], tree[right]); 
    }
}

long long query(int i, int b, int e, int l, int r){

    if(b>r || l > e) return oo; 

    if(b>=l && e<=r) 
        return tree[i]; 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1;
        return min(query(left, b, mid, l, r), query(right, mid+1, e, l, r));
    }
}

int main(){

    long long n, q, a, b; 

    cin >> n >> q; 

    for(int i=0; i<n; i++)
        cin >> number[i];
    
    build(1, 0, n-1);

    while (q--)
    {
        cin >> a >> b; 

        cout << query(1, 0, n-1, a-1, b-1) <<endl; 
    }   
}