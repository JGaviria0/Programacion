/*  

Metodo: 
Jhon Alex Gaviria
*/
#include <bits/stdc++.h>

using namespace std; 

const int MAXDATA = 1e5 + 6;
const int oo = 1e9; 
long long cache[102][MAXDATA];
pair<int, int> path[102][MAXDATA]; 
long long val[102][3]; 
int n, w; 

long long dp(int index, int weight){
    // cout << index << " "<< weight << endl; 
    if(weight > w){
        path[index][weight] = make_pair(-1, -1); 
        return -oo; 
    }

    if(index == n){
        path[index][weight] = make_pair(-1, -1); 
        return 0; 
    }

    if (cache[index][weight] != -1) return cache[index][weight];

    int value1 = val[index][1] + dp(index+1, weight + val[index][0]); 
    int value2 = dp(index+1, weight); 

    if(value1 > value2){
        path[index][weight] = make_pair(index+1, weight + val[index][0]);
    } else {
        path[index][weight] = make_pair(index+1, weight);
    }

    return cache[index][weight] = max(value1, value2); 
}

void reconstruct(){

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<38; j++){
    //         cout << cache[i][j] << (cache[i][j] < 10 ? "  " : " "); 
    //     }
    //     cout << endl; 
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<38; j++){
    //         cout << "(" <<path[i][j].first << (path[i][j].first < 10 ? " ," : ",") << path[i][j].second << (path[i][j].second < 10 ? " )" : ")"); 
    //     }
    //     cout << endl; 
    // }

    int index = 0, j = 0, k =  0;

    while(index != -1 && j != -1){
        int pasi = index, pasj = j; 
        tie(index, j) = path[index][j];  
        if(pasj < j)
            cout <<  val[pasi][1]<< "; "<< val[pasi][0] << "; ;" << endl; ;
    }


}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    memset(cache,-1, sizeof (cache));
    // for(int i=0; i<102; i++){
    //     for(int j=0; j<MAXDATA; j++){
    //         path[i][j] = make_pair(-1,-1); 
    //     }
    // }

    cin >> n >> w; 

    for(int i=0; i<n; i++){
        cin >> val[i][0] >> val[i][1];
    }

    cout << "The max cost is: " <<dp(0, 0) << endl;
    cout << "The items in the knapsack: " << endl; 

    reconstruct();  
}