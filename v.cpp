#include <bits/stdc++.h>
using namespace std;


bool Sequence(const string &s) {
    int balance = 0;
    for (char c : s) {
        if (c == '(') balance++;
        else balance--;
        if (balance < 0) return false; 
    }
    return balance == 0; 
}

int main() {
    int t;
    cin >> t;  
    
    while (t--) {
        string a;
        cin >> a;  
        bool found = false;
        char assignments[8][3] = {
            {'(', '(', '('}, {'(', '(', ')'}, {'(', ')', '('}, {'(', ')', ')'},
            {')', '(', '('}, {')', '(', ')'}, {')', ')', '('}, {')', ')', ')'}
        };
        
        for (int i = 0; i < 8; i++) {
            string b = a;
            
           
            for (int j = 0; j < b.length(); j++) {
                if (b[j] == 'A') b[j] = assignments[i][0];
                else if (b[j] == 'B') b[j] = assignments[i][1];
                else if (b[j] == 'C') b[j] = assignments[i][2];
            }
            
            
            if (Sequence(b)) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
