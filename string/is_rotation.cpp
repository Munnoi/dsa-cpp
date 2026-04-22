#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

// Time - O(n^2), Space - O(1)
void isRotationV1(string& s1, string& s2) {
    if (s1.size() != s2.size()) {
        cout << "No" << endl;
        return;
    }

    for (int i = 0; i < s1.size(); i++) {
        if (s1 == s2) {
            cout << "Yes" << endl;
            return;
        }
        char last = s1.back();
        s1.pop_back();
        s1.insert(s1.begin(), last);
    }
    cout << "No" << endl;
}

void solve() {
    string s1 = "aabc";
    string s2 = "acba";

    isRotationV1(s1, s2);
}

int main() {
    fast_io;

    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}