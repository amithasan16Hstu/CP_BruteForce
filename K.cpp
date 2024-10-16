#include <bits/stdc++.h>
using namespace std;

bool is_divisible_by_7(int num) {
    return num % 7 == 0;
}

int closest_divisible_by_7(int num) {
    if (is_divisible_by_7(num)) {
        return num;
    }

   
    for (int i = 0; i <= 9; ++i) {
        int candidate = num - (num % 10) + i;
        if (is_divisible_by_7(candidate)) {
            return candidate;
        }
    }
    return num; 
}

void solve() {
    int n;
    cin >> n;

    cout << closest_divisible_by_7(n) << '\n';
}

int main() {
   

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
