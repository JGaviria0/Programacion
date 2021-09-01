#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<vector<pair<int,int>>> vvpi;
const int inf = 1e9+7;
vi A(300005),B(300005);

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  ll n,sum = 0;cin>>n;A[0]=0;
  for(int i = 1; i <= n;i++)
    cin>>A[i];
  sort(A.begin(),A.begin()+n);
  B[0] = 0;
  for(int i=1; i <= n; i++)
    B[i] = B[i-1] + A[i];
  sum = B[n];
  for(int i=0; i < n-1;i+=n/2)
    sum+=B[n]-B[i];
  cout<<sum<<"\n";
  return 0;
}