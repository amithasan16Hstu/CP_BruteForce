#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;  
    cin >> T;

    while (T--) {
        int k;
        cin >> k;  
        
        int position = 0;  
        for (int i = 1; i <= k; ++i) {
            if (i % 2 == 1) {
               
                position += 3;
            } else {
                
                position -= 1;
            }
        }
        
        cout << position << endl;
    }

    return 0;
}
