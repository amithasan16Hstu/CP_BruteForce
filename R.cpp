#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;  
    cin >> T;

    while (T--) {
        int X;
        cin >> X;  
        int remainder = X % 4;
        
        if (remainder == 0) {
            cout << "North" << endl;
        } else if (remainder == 1) {
            cout << "East" << endl;
        } else if (remainder == 2) {
            cout << "South" << endl;
        } else if (remainder == 3) {
            cout << "West" << endl;
        }
    }

    return 0;
}
