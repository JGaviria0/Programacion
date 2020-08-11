/*  
https://cses.fi/problemset/task/1652
Metodo: segment tree
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int n, hotel[200005], q, tree[800005]; 
bool flag = true; 

void build(int i, int b, int e){

    if(b == e) 
        tree[i] = hotel[b-1];
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1; 
        build(left, b, mid);
        build(right, mid+1, e);
        tree[i] = max(tree[right], tree[left]); 
    }  
}

void query(int i, int b, int e, int k)
{
    if(tree[i] < k) return; 

    if(b == e)
    {
        cout << b << " ";
        tree[i] -= k;
        flag = false; 
    } 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1;
        query(left, b, mid, k);
        if(flag)
            query(right, mid+1, e, k);
        tree[i] = max(tree[right] , tree[left]);  
    }  
}

int main(){

    int a; 

    cin >> n >> q; 

    for (int i=0; i<n; i++)
        cin >> hotel[i]; 

    build(1, 1, n);
 

    while(q--){
        cin >> a; 
        flag = true; 
        query(1,1,n,a); 
        if (flag) cout << "0" << " "; 
        
    }

}