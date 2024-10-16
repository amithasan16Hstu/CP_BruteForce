#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    
    vector<int> scores(N-1);
    
    
    for (int i = 0; i < N-1; i++) {
        cin >> scores[i];
    }
    
    
    sort(scores.begin(), scores.end());
    
    
    for (int i = 0; i <= 100; i++) {
        vector<int> allScores = scores;  
        allScores.push_back(i);  
        
       
        sort(allScores.begin(), allScores.end());
        

        int total = 0;
        for (int i = 1; i < N-1; i++) {
            total += allScores[i];
        }
        
        
        if (total >= X) {
            cout << i << endl;
            return 0;
        }
    }
    
    
    cout << -1 << endl;
    return 0;
}
