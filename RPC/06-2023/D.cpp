#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    long long n, q; 

    cin >> n >> q; 
    vector<int> collection;

    for(int i=0; i<n; i++){
        long long a;
        cin>>a;
        collection.push_back(a); 
    }

    sort(collection.begin(),collection.end());

    for(int i=0; i<q; i++){
        int op;
        cin>>op;
        if(op==1){
            long long k;
            cin>>k;
            if(binary_search(collection.begin(), collection.end(), k)){
                continue;
            }
            else if(k>collection[collection.size()-1]){
                collection.push_back(k);
            }
            else{
                long long low = lower_bound(collection.begin(), collection.end(), k) - collection.begin();
                collection[low] = k;
            }
        }
        if(op==2){
            long long a, b;
            cin>>a>>b;
            long long low_a = lower_bound(collection.begin(), collection.end(), a)-collection.begin();
            long long low_b = lower_bound(collection.begin(), collection.end(), b+1)-collection.begin();
            cout<<low_b-low_a<<endl;
        }
    }
}