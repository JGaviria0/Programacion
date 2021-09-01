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
string yes="Yes";
string no="No";

struct use{
    int dead;
    bool paper;
    use(){}
    use(int d, char p): dead(d), paper(p=='y'){}
};

istream& operator>>(istream& is, use &u){
    int dead;
    char paper;
    is>>dead>>paper;
    u={dead,paper};
    return is;
}
ostream& operator<<(ostream& os, const use &u){
    os<<u.dead<<esp<<u.paper;
    return os;
}

bool cmp(use a, use b){
    if(a.dead==b.dead) return a.paper>b.paper;
    return a.dead<b.dead;
}


int main(){
    fast_io;
    /*
     freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    */
    int s,n;
    cin>>s>>n;

    vector<use> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end(),cmp);

    //for(use u:v) cout<<u<<el;

    vi cells(s);

    int pp=0;
    int cell=0;
    bool f=1;
    for(int i=0;i<n;i++){
        cell%=s;
        if(v[i].dead-1>=cells[cell]++){
            if(v[i].paper){
                if(pp+1<=v[i].dead){
                    pp=cells[cell];
                }else{
                    f=0;
                }
            }
        }else{
            f=0;
        }
        cell++;
    }
    if(f)
        cout<<yes<<el;
    else
        cout<<no<<el;
}

/*
3 7
2 y
2 n
5 y
1 n
5 n
2 y
1 n

2 7
2 y
2 n
5 y
1 n
5 n
2 y
1 n
*/