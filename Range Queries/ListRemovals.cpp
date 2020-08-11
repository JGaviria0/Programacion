/*  
https://cses.fi/problemset/task/1652
Metodo: segment tree
Jhon Alex Gaviria
*/

#include <bits/stdc++.h>

using namespace std; 

int n, tree[800005], lis[800005]; 

void build(int i, int b, int e){
    if (b == e)
        tree[i] = lis[b-1];
    else{
        int mid = (b+e)/2, left = i*2, right = left +1;
        build(left, b, mid);
        build(right, mid+1, e); 
    }
}

void query(int i, int b, int e, int a, int be){

    if (b>a || e < a) return;

    if (b == e && a == b){
        cout << "a = " <<a +tree[i] << endl;
        cout << tree[i] << " ";
    }
    else{
        int mid = (b+e)/2, left = i*2, right = left +1;
        query(left, b, mid, a + tree[i], be);
        query(right, mid+1, e, a + tree[i], be);  
    } 

    if (b==a && e == be) tree[i]++;
}

int main ()
{
    int a; 
    cin >> n; 

    memset(tree, 0, sizeof tree); 

    for(int i=0; i<n; i++)
        cin >> lis[i];
    
    build(1, 1, n); 
    
    while(n--){
        cin >> a;
        query(1,1,n,a,n); 
    }
}