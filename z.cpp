#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int d, x, y, z;
        cin >> d >> x >> y >> z;
        
       
        int strategy1 = 7 * x;
       
        int strategy2 = d * y + (7 - d) * z;
        
       
        cout << max(strategy1, strategy2) << endl;
    }
    
    return 0;
}
