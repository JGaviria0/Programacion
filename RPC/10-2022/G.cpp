 #include <bits/stdc++.h>
 
using namespace std; 
    
const int maxi = 4e5 + 10; 
 
long long number[maxi], tree[maxi];

void printtree (int n) {

    for(int i=1; i<2*n; i++) {
        cout << tree[i] << " "; 
    }

    cout << endl; 
}
 
void build(int iterator, int begin, int end, int leaves[]){
 
    if(begin == end)
        tree[iterator] = leaves[begin]; 
    else
    {
        int mid = (begin+end)/2, left = iterator*2, right = left + 1; 
        build(left, begin, mid, leaves); 
        build(right, mid+1, end, leaves); 
        tree[iterator] = tree[left] + tree[right]; 
    }
}
 
long long query(int iterator, int begin, int end, int left, int right){

 
    if(begin > right || left > end) return 0; 
    if(begin >= left && end <= right) {

        return tree[iterator]; 
    } 
    
    int mid = (begin+end)/2, toleft = iterator*2, toright = toleft + 1;
    long long ans = query(toleft, begin, mid, left, right) + query(toright, mid+1, end, left, right);
    
    return ans; 
    
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

void solve() {

    int n; 
    int permutation, leaves[maxi];

    cin >> n; 

    map<int, int>index; 

    for(int i=0; i<n; i++) {
        cin >> permutation; 
        index[permutation] = i;
        leaves[i] = 1;  
    }
    // 4 1 6 5 3 7 2
    build(1, 0, n-1, leaves);

    int lastmatch = 1; 
    int lastmatchpos = index[lastmatch];
    update(1,0,n-1,lastmatchpos,0);

    long long sum = 0; 

    for(long long i=1; i<n-1; i++) {


        int nextpos = index[lastmatch+1]; //2
        int actualpos = index[lastmatch]; //1

        lastmatch++; 
        update(1,0,n-1,nextpos,0);


        if( nextpos < actualpos) {
            long long firstsum = query(1, 0, n-1, actualpos, n-1);
            long long secondsum = query(1, 0, n-1, 0, nextpos);
            long long ans =  (firstsum + secondsum)*i; 
            sum += ans; 
        } else {
            long long ans = query(1, 0, n-1, actualpos, nextpos)*i;
            sum += ans;
        }

        
    }

    cout << sum << endl; 
}
 
int main(){
 
    int t; 

    cin >> t; 

    while(t--) {
        solve(); 
    }
}