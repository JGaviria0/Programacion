/// Write by Daniel Perez .PERAPRO
#include<bits/stdc++.h>

using namespace std;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using vi=vector<int>;
using pii=pair<int,int>;
#define pb push_back
#define ff first
#define ss second
typedef long long ll;
typedef unsigned long long ull;
char el = '\n';
char esp = ' ';

ostream& operator<<(ostream& os, const vector<int> &v){
    for(auto const &i: v){
        os<<i<<" ";
    }
    os<<'\n';
    return os;
}
string yes="YES";
string no="NO";

int main(){
    fast_io;
    /*
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    */
    int n;
    cin>>n;
    string trade,has,wants;
    
    map<string,int> obj;
    int nodes=3*n;
    vector<vi> g(nodes);
    vector<bool> visited(nodes);
    
    int objt=n;
    for(int i=0;i<n;i++){
        cin>>trade>>has>>wants;
        if(!obj.count(has)) obj[has]=objt++; 
        g[i].pb(obj[has]);
        if(!obj.count(wants)) obj[wants]=objt++;
        g[obj[wants]].pb(i);
    }
    
    int ans=0;
    
    for(int i=0;i<n;i++){
        if(visited[i]) continue;
        queue<int> q;
        q.push(i);
        int cnt=1;
        bool f=0;
        while(q.size()){
            int cur=q.front();
            q.pop();
            if(visited[cur]) continue;
            visited[cur]=1;
            for(int u:g[cur]){
                if(u==i){
                    f=1;
                    break;
                }
                cnt++;
                q.push(u);
            }
        }
        if(f) ans=max(ans,cnt/2);
    }
    
    if(ans)
        cout<<ans<<el;
    else 
        cout<<"No trades possible"<<el;
}

/*
4
Abby 1 5
Bob 2 6
Chris 3 7
Dan 4 8
*/