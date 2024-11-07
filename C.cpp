#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int loneliness = n;
        int global_or = 0;
        for (int i = 0; i < n; i++) {
            global_or |= a[i];
        }

        int current_or = 0;
        int segments = 0;
        for (int i = 0; i < n; i++) {
            current_or |= a[i];
            if (current_or == global_or) {
                segments++;
                current_or = 0;
            }
        }

        loneliness = segments;
        cout << loneliness << endl;
    }
    return 0;
}