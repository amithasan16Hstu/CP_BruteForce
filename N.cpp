#include <bits/stdc++.h>
using namespace std;

int main() {
   
    vector<int> extremely;
    
   
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 5; j++) {  
            int num = i * pow(10, j);
            if (num <= 999999) {
                extremely.push_back(num);
            }
        }
    }
    
    int t;
    cin >> t;  

    while (t--) {
        int n;
        cin >> n;

       
        int count = 0;
        for (int num : extremely) {
            if (num <= n) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
