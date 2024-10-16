#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int sunny_days = 0;
        for (int i = 0; i < 7; ++i) {
            int day;
            cin >> day;  
            if (day == 1) {
                sunny_days++;
            }
        }

       
        if (sunny_days > 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
