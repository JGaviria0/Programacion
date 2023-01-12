#include <bits/stdc++.h>

using namespace std; 

int main() {
    
    ios::sync_with_stdio(0);
	cin.tie(0);
    map<string, string> dic = {
        {"HELLO", "ENGLISH"},
        {"HOLA", "SPANISH"},
        {"HALLO", "GERMAN"},
        {"BONJOUR", "FRENCH"},
        {"CIAO", "ITALIAN"},
        {"ZDRAVSTVUJTE", "RUSSIAN"}
    };
    
    int n, m; 
    string s; 
    int i = 1; 
    while(cin >> s) {
        if (s == "#") break; 
        cout << "Case " << i <<": "; 
        cout << (dic[s] == ""? "UNKNOWN":dic[s]) << endl; 
        i++; 
    }
}