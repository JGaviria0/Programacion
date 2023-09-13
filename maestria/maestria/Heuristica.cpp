#include<bits/stdc++.h>

using namespace std; 

double k1, k2; 

bool maxCostHeuristic(pair<int, int> a, pair<int, int> b){

    if(a.first == b.first) {
        return a.second > b.second; 
    }   

    return a.first > b.first; 
}

bool minVolumeHeuristic(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) {
        return a.first < b.first; 
    }   

    return a.second < b.second;
}

bool costvolumeHeuristic(pair<int, int> a, pair<int, int> b){
    double avalue = (double)a.first/a.second; 
    double bvalue = (double)b.first/b.second; 
    return avalue > bvalue; 
}

bool factorCombinationHeuristic(pair<int, int> a, pair<int, int> b){
    double avalue = (double)((double)a.first*k1 + (double) a.second*k2); 
    double bvalue = (double)((double)b.first*k1 + (double) b.second*k2); 
    return avalue > bvalue; 
}

void printArray(vector<vector<pair<int, int>>>array, int maxVolume){
    int totalVolume[] = {0,0,0,0,0,0,0,0,0};
    int found[] = {0,0,0,0,0,0,0,0,0};
    int totalCost[] =   {0,0,0,0,0,0,0,0,0};
    
    cout << "Maxcost; ; ;MinVol; ; ;cost/volum; ; ;factorCom;0,1 0,9 ; ;factorCom;0,3 0,7 ; ;factorCom;0,5 0,5 ; ;factorCom;0,7 0,3 ; ;factorCom;0,9 0,1 ; ;" << endl; 
    for(int i=0; i<array[0].size(); i++) {
        for(int j=0; j<array.size(); j++) {
            if(found[j] != 0) {
                cout << "; ; ; "; 
                continue; 
            }
            totalCost[j] += array[j][i].first; 
            totalVolume[j] += array[j][i].second; 
            if(totalVolume[j] > maxVolume){
                found[j] = 1; 
                totalCost[j] -= array[j][i].first; 
                totalVolume[j] -= array[j][i].second;
                cout <<totalCost[j] << "; " << totalVolume[j] << "; " << "; "; 
                continue; 
            }
            cout << array[j][i].first << "; " << array[j][i].second << "; " << "; "; 
        }
        cout << endl; 
    }
}

int main(){

    vector<pair<int, int>> item {{8,6}, {10,9}, {13,4}, {5,4}, {12,7}, {5,5}, {3,8}, {8,9}, {5,4}, {4,3}, {14,5}, {5,4}, {10,5}, {13,2}, {7,3}, {15,3}, {14,7}, {15,4}, {12,7}, {8,9}, {5,2}, {10,4}, {15,8}, {11,3}, {8,5}, {8,6}, {13,10}, {3,5}, {12,8}, {4,4}, {4,7}, {14,3}, {9,4}, {10,10}, {10,10}, {9,2}, {3,5}, {4,8}, {10,3}, {13,2}}; 
    vector<int> cost   { 8,   10,   13,   5,   12,   5,   3,   8,   5,   4,   14,   5,   10,   13,   7,   15,   14,   15,   12,   8,   5,   10,   15,   11,   8,   8,   13,   3,   12,   4,   4,   14,   9,   10,   10,   9,   3,   4,   10,   13 };
    vector<int> volume { 6,   9,    4,    4,    7,   5,   8,   9,   4,   3,    5,   4,    5,    2,   3,    3,    7,    4,    7,   9,   2,    4,    8,    3,   5,   6,   10,   5,    8,   4,   7,    3,   4,   10,   10,   2,   5,   8,    3,    2 }; 
    
    int maxVolume = 0; 
    for(int i=0; i<item.size(); i++) maxVolume += item[i].second;  

    int maxAvailableVolume = (maxVolume*2)/3; 

    vector<vector<pair<int, int>>> ans; 


    // Max Cost Heuristic
    vector<pair<int, int>> maxCostHeuristicArray = item; 
    sort(maxCostHeuristicArray.begin(), maxCostHeuristicArray.end(), maxCostHeuristic); 
    ans.push_back(maxCostHeuristicArray); 
    
    // Min Volume Heuristic
    vector<pair<int, int>> minVolumeHeuristicArray = item; 
    sort(minVolumeHeuristicArray.begin(), minVolumeHeuristicArray.end(), minVolumeHeuristic);
    ans.push_back(minVolumeHeuristicArray); 


    //cost / volume Heuristic
    vector<pair<int, int>> costvolumeHeuristicArray = item; 
    sort(costvolumeHeuristicArray.begin(), costvolumeHeuristicArray.end(), costvolumeHeuristic);
    ans.push_back(costvolumeHeuristicArray); 


    //Factor combination
    for(double i=0.1; i<1; i+= 0.2){
        k1 = i; 
        k2 = 1 - i; 
        vector<pair<int, int>> factorCombinationHeuristicArray = item; 
        sort(factorCombinationHeuristicArray.begin(), factorCombinationHeuristicArray.end(), factorCombinationHeuristic);
        ans.push_back(factorCombinationHeuristicArray); 
    }

    // printArray(ans, maxAvailableVolume);

    cout << cost.size() << " " << maxAvailableVolume << endl; 
    for(int i=0; i<cost.size(); i++){
        cout << volume[i] << " " << cost[i] << endl; 
    }





    
    
    
    
    
    
    









    return 0;
}