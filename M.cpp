#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;  
        vector<int> leftPocket(n);
        vector<int> rightPocket(m);

       
        for (int i = 0; i < n; i++) {
            cin >> leftPocket[i];
        }

       
        for (int i = 0; i < m; i++) {
            cin >> rightPocket[i];
        }

        int count = 0;  
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (leftPocket[i] + rightPocket[j] <= k) {
                    count++;
                }
            }
        }

        
        cout << count << endl;
    }

    return 0;
}
