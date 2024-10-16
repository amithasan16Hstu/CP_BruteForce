#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n, m; 
        cin >> n >> m;
        
        string x, s;
        cin >> x >> s;
        
        
        string current = x;
        
       
        int operations = 0;
        bool found = false;
        
       
        while (current.length() < 25) {
            if (current.find(s) != string::npos) {
                found = true;
                break;
            }
            current += x;
            operations++;
        }

       
        if (found || current.find(s) != string::npos) {
            cout << operations << endl;
        } else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
