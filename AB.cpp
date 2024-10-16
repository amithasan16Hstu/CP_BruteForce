#include <bits/stdc++.h>
using namespace std;


bool Hours(int h, int start, int end) {
    if (start <= end) {
        return h >= start && h < end; // Simple range check
    } else {
        // Time wraps around midnight (e.g., 22 to 3)
        return h >= start || h < end;
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<int> W(N), X(N);  
    for (int i = 0; i < N; i++) {
        cin >> W[i] >> X[i];
    }
    
    int maxEmployees = 0;

    
    for (int h = 0; h < 24; h++) {
        int currentEmployees = 0;
        
        
        for (int i = 0; i < N; i++) {
            int workStart = (9 - X[i] + 24) % 24;  
            int workEnd = (18 - X[i] + 24) % 24;   
            if (Hours(h, workStart, workEnd)) {
                currentEmployees += W[i];
            }
        }

      
        maxEmployees = max(maxEmployees, currentEmployees);
    }

   
    cout << maxEmployees << endl;

    return 0;
}
