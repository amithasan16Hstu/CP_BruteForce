#include <bits/stdc++.h>
using namespace std;


long long Squared(long long x1, long long y1, long long x2, long long y2) {
    return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
}

void AC() {
    long long a, b, x, y, xx, yy;
    cin >> a >> b >> x >> y >> xx >> yy;

   
    int dx[] = {-1, -1, 1, 1};
    int dy[] = {-1, 1, -1, 1};

    int r = 0;

 
    for (int i = 0; i < 4; i++) {
        long long stepX = dx[i] * a;
        long long stepY = dy[i] * b;
        long long newX = x + stepX;
        long long newY = y + stepY;

        if (Squared(newX, newY, xx, yy) == (a * a + b * b)) {
            r++;
        }
    }

   
    if (a != b) {
        for (int i = 0; i < 4; i++) {
            long long stepX = dx[i] * b;
            long long stepY = dy[i] * a;
            long long newX = x + stepX;
            long long newY = y + stepY;

            if (Squared(newX, newY, xx, yy) == (a * a + b * b)) {
                r++;
            }
        }
    }

   
    cout << r << endl;
}

int main() {
    

    int t;
    cin >> t;

  
    while (t--) {
        AC();
    }

    return 0;
}
