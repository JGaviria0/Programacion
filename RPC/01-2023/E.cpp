/*  

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
        // tree[i] = max(tree[left], tree[right]); 
    }
}

long long query(int i, int b, int e, int l, int r){

    if(b>r || l > e) return 0; 

    if(b>=l && e<=r) 
        return tree[i]; 

    int mid = (b+e)/2, left = i*2, right = left + 1;

    // if(tree[i] == 1){
    //     tree[left] = tree[i];
    //     tree[right] = tree[i]; 
    //     // tree[i] = 0;
    // } 
    
    return max(query(left, b, mid, l, r), query(right, mid+1, e, l, r));
    
}

void update(int i, int b, int e, int init, int endi){

    if(endi<b || init > e) return;
     
    if(b == e){
        tree[i] = 1;
        return;   
    }

    int mid = (b+e)/2, left = i*2, right = left + 1;
    update(left, b, mid, init, endi);
    update(right, mid+1, e, init, endi);
    // tree[i] = (tree[left] == 1 &&  tree[right]  == 1) ? 1: 0;
    tree[i] = max(tree[left], tree[right] );
}

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first > b.first){
        return true; 
    }

    if(a.first == b.first && a.second < b.second){
        return true; 
    }

    return false; 
}
 
int main(){
 
    long long n, q, a, b; 
    vector<pair<int,int>> vec; 
    cin >> n; 

    for(int i=0; i<n; i++){
        cin >> a; 
        vec.push_back({a, i});
    }

    sort(vec.begin(), vec.end(), comp);
    int res = 0; 
    for(int i=0; i<vec.size()-1; i++){
        if(vec[i].first != vec[i+1].first){
            continue;
        }

        res += abs(vec[i].second - vec[i+1].second) - 1;
    }
}