#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;  
    cin >> T;

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;

        int sum = A + B + C;

        if (sum == 1 || sum == 2) {
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}
