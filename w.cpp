#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  
    string s;
    cin >> s;  

    unordered_map<string, int> freq;  

   
    for (int i = 0; i < n - 1; ++i) {
        string two_gram = s.substr(i, 2);  
        freq[two_gram]++;  
    }

    
    string gram;
    int max_count = 0;
    
    for (const auto& pair : freq) {
        if (pair.second > max_count) {
            max_count = pair.second;
            gram = pair.first;
        }
    }

    
    cout << gram << endl;

    return 0;
}
