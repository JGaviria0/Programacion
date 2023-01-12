#include <bits/stdc++.h>

using namespace std; 

int sumOfChars(string s1){
    int sum = 0; 
    for(int i=0; i<s1.size(); i++){
        // cout <<  s1[i] - 'A' << endl; 
        if  (s1[i] - 'A'  >= 0 && s1[i] - 'A' < 26){
            sum += s1[i] - 'A' + 1;
        } 
        if  (s1[i] - 'a'  >= 0 && s1[i] - 'a' < 26){
            sum += s1[i] - 'a' + 1;
        } 
    }
    return sum; 
}

double reduce(int sum){
    double sums1 = sum; 
    while(sums1 >= 10){
        int aux = sums1; 
        int sum = aux%10; 
        while(aux > 0){
            aux /= 10;
            sum += aux%10; 
        }
        sums1 = sum; 
    }

    return sums1; 
}

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    
    string s1, s2; 

    while(true){
        getline(cin, s1);
        getline(cin, s2);
        if(s1 == ""){
            break; 
        }
        int sums1 = sumOfChars(s1);
        int sums2 = sumOfChars(s2);
        double value1 = reduce(sums1);
        double value2 = reduce(sums2);

        double ratio = min(value1, value2) / max(value1, value2);
        
        
        cout << fixed << setprecision(2) << ratio*100 << " %"<< endl;
        
        
    }
}