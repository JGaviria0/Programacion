#include <bits/stdc++.h> 

using namespace std; 

const int maxi = 6e5; 
 
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

void solve(){
    int n; 
    cin >> n;
    int a[400000]; 
    bool abool[400000];

    memset(abool, true, sizeof abool);

    map<int, deque<int>> m; 

    for(int i=0; i<n; i++)
        number[i] = 1;
    build(1, 0, n-1);

    for(int i=n-1; i>=0; i--){
        cin >> a[i];
        m[a[i]].push_back(i);
    }

    // for(auto i: m){
    //     cout << i.first << " -> ";
    //     for(int k=0; k<i.second.size(); k++){
    //         cout << i.second[k] << " ";
    //     }
    //     cout << endl; 
    // }

    // query(1, 0, n-1, a-1, b-1);
    //  update(1,0,n-1,a-1,b);
    long long sum = 0; 
    for(int i=0; i<n; i++){
        if(abool[i]){
            int lastpos = m[a[i]][0];
            abool[i] = false; 
            abool[m[a[i]][0]] = false; 
            int result = query(1, 0, n-1, i, lastpos) - 1;
            // cout << i << " " << lastpos << " "<< result <<  endl; 
            update(1, 0, n-1, i, 0);
            update(1, 0, n-1, lastpos, 0);
            m[a[i]].pop_back();
            m[a[i]].pop_front();
            sum += result;
        }   
    }

    cout << sum << endl ;

}

int main(){

    ios::sync_with_stdio(0);
	cin.tie(0);
    
    int t; 

    cin >> t;

    while(t--){
        solve();
    } 
}