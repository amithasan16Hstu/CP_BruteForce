#include <bits/stdc++.h>
using namespace std;

bool Pretty(int number) {
    int lastDigit = number % 10;
    return (lastDigit == 2 || lastDigit == 3 || lastDigit == 9);
}

int main() {
    int T; 
    cin >> T;

    while (T--) {
        int L, R;
        cin >> L >> R;
        int count = 0;

        for (int i = L; i <= R; ++i) {
            if (Pretty(i)) 
                count++;
        }

        cout << count << endl;
    }

}
