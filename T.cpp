#include <bits/stdc++.h>
using namespace std;


bool isPalindrome(const string &s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    int N;
    cin >> N;  
    vector<string> strings(N);
    
    
    for (int i = 0; i < N; i++) {
        cin >> strings[i];
    }

   
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i != j) {
                
                string concatenated = strings[i] + strings[j];
                
               
                if (isPalindrome(concatenated)) {
                    cout << "Yes" << endl;
                    return 0;
                }
            }
        }
    }

    
    cout << "No" << endl;
    return 0;
}
