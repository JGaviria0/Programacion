/*  
https://cses.fi/problemset/task/1652
Metodo: segment tree
Jhon Alex Gaviria
*/
 
#include <bits/stdc++.h>
 
using namespace std; 
 
int tree[800005], lis[800005]; 
 
void build(int i, int b, int e){
 
    if(b == e)
        tree[i] = 1; 
    else
    {
        int mid = (b+e)/2, left = i*2, right = left + 1; 
        build(left, b, mid); 
        build(right, mid+1, e);
        tree[i] = tree[right] + tree[left];     
    }
}
 
void query(int i, int b, int e, int l){
 
    if (b==e)
    {
        cout << lis[b] << " "; 
        tree[i] = 0;
    }
    else {
        long long mid = (b+e)/2, left = i*2, right = left + 1;
        if(tree[2*i] >= l) 
            query(left, b, mid, l);
        else
        {
            query(right, mid+1, e,  l - tree[2*i]);
        }
        tree[i] = tree[right] + tree[left];
    }
}
 
int main ()
{
    int a, n, aux; 
    cin >> n; 
 
    for(int i=1; i<=n; i++){
        cin >> lis[i];
    } 
    build(1,1,n);
    
    for(int i=0; i<n; i++)
    {
        cin >> a;
        query(1,1,n,a); 
 
 
        // for(int i=1; i<n*2; i++)
        //      cout << tree[i] << " ";
        // cout << endl; 
    }
}