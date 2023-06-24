#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int j=0; j<t; j++){
        long long m;
        cin>>m;
        int flag=1;
        vector<long long> divs;
        for(long long i=1; i*i<=m; i++){
            if(m%i==0){
                divs.push_back(i);
                divs.push_back(m/i);
            }
        }
        sort(divs.begin(), divs.end());
        long long maxi=1;
        for(int k=1; k<(divs.size()); k++){
            if(maxi<(divs[k]-1)){
                cout<<"No"<<endl;
                flag=0;
                break;
            }
            maxi+=divs[k];
        }
        if(flag==1){
            cout<<"Yes"<<endl;
        }
        

    }
    
}