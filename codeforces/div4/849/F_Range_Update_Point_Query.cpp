/*  
https://cses.fi/problemset/task/1651
Metodo: segment tree
Jhon Alex Gaviria
*/
 
#include <bits/stdc++.h>
 
using namespace std; 
 
const int maxi = 200005; 
 
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

// long long query(int iterator, int begin, int end, int left, int right){

 
//     if(begin > right || left > end) return 0; 
//     if(begin >= left && end <= right) {

//         return tree[iterator]; 
//     } 
    
//     int mid = (begin+end)/2, toleft = iterator*2, toright = toleft + 1;
//     long long ans = query(toleft, begin, mid, left, right) + query(toright, mid+1, end, left, right);
    
//     return ans; 
    
// }
 
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

void transfor(int n, int numberoftrans){
    long long auxn = n; 
    while(auxn>9 && numberoftrans > 0){
        long long aux = auxn;
        long long sum = 0; 
        while(aux > 0){
            sum += aux%10;
            aux /= 10; 
        }

        auxn = sum; 
        numberoftrans--;
    }
    cout << auxn << endl; 
}
 
int main(){
 
    long long n, q, a, b, c, d, t; 

    cin >> t; 

    while(t--){

        cin >> n >> q;
        int arr[maxi];
    
        for(int i=0; i<n; i++){
            cin >> arr[i];
            number[i] = 0;
        }
        
        build(1, 0, n-1);
    
        while (q--)
        {
            cin >> c >> a;
    
            if (c == 1){
                cin >> b;
                update(1,0,n-1,a-1,b-1,1);
            }
            else{
                int aux = query(1, 0, n-1, a-1);
                // int aux = query(1, 0, n-1, a-1, a-1);
                transfor(arr[a-1], aux);
            }
        } 
    }
 
}