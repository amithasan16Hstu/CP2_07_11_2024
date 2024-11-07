#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        int correct_positions = 0;
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            if (p[i] == i + 1) {
                correct_positions++;
            }
        }
        cout << (correct_positions + 1) / 2 << endl;
    }
    return 0;
}
