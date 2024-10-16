#include <bits/stdc++.h>
using namespace std;

int main() {
    long long D;
    cin >> D;
    
    long long minDiff = D;  
    for (long long x = 0; x * x <= D; ++x) {
        long long x2 = x * x;
        
        long long y = sqrt(D - x2);  
        
      
        for (long long dy = -1; dy <= 1; ++dy) {
            long long y_try = y + dy;
            if (y_try >= 0) {  
                long long y2 = y_try * y_try;
                long long sum = x2 + y2;
                long long diff = abs(sum - D);
                minDiff = min(minDiff, diff);
            }
        }
    }
    
    cout << minDiff << endl;
    return 0;
}
