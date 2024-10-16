#include <bits/stdc++.h>
using namespace std;


bool isBeautiful(const vector<int>& sequence) {
    int n = sequence.size();
    
    
    for (int i = 0; i < n; i++) {
        if (sequence[i] <= i + 1) {
            return true; 
        }
    }
    return false; 
}

int main() {
    int t;
    cin >> t; 
    
    while (t--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        if (isBeautiful(a)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
