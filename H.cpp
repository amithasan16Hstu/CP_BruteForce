#include <bits/stdc++.h>
using namespace std;


int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int t;  
    cin >> t;

    while (t--) {
        int x, k;
        cin >> x >> k;

        while (true) {
            int sum = digitSum(x);
            if (sum % k == 0) {
                cout << x << endl;
                break;
            }
            x++;  
        }
    }

    return 0;
}
