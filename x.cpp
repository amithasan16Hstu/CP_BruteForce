#include <bits/stdc++.h>
using namespace std;


bool isBeautiful(int a, int b, int c, int d) {
    return (a < b && c < d && a < c && b < d);
}

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;  
        if (isBeautiful(a, b, c, d) ||  
            isBeautiful(c, a, d, b) ||   
            isBeautiful(d, c, b, a) ||   
            isBeautiful(b, d, a, c)) {   
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
