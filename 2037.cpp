#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n <= 3) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> p;

        // Fixed pattern
        p.push_back(1);
        p.push_back(n);
        p.push_back(n - 1);
        p.push_back(3);
        p.push_back(n - 2);
        p.push_back(2);

        // Remaining numbers
        for (int i = 4; i <= n - 3; i++) {
            p.push_back(i);
        }

        for (int x : p) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
