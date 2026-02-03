#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if (n == 1) {
            cout << s << "\n";
            continue;
        }

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int maxChar = 0;
        for (int i = 1; i < 26; i++) {
            if (freq[i] > freq[maxChar]) {
                maxChar = i;
            }
        }

        char best = char('a' + maxChar);

        
        for (int i = 0; i < n; i++) {
            if (s[i] != best) {
                s[i] = best;
                break;   
            }
        }

        cout << s << "\n";
    }

    return 0;
}
