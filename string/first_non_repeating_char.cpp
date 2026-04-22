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
char firstNonRepeatingCharV1(string& s) {
    int n = s.size();

    for (int i = 0; i < n; i++) {
        bool found = false;

        for (int j = 0; j < n; j++) {
            if (i != j && s[i] == s[j]) {
                found = true;
                break;
            }
        }

        if (!found) return s[i];
    }

    return '$';
}

// Time - O(n), Space - O(n)
char firstNonRepeatingCharV2(string& s) {
    int n = s.size();
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (mp[s[i]] == 1) return s[i];
    }

    return '$';
}

void solve() {
    string s = "racecar";
    cout << firstNonRepeatingCharV2(s) << endl;
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