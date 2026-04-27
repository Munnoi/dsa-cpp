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
char firstRepeatingCharV1(string& s) {
    int n = s.size();

    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++) 
            if (s[i] == s[j])
                return s[i];

    return '$';
}

// Time - O(n), Space - O(1)
char firstRepeatingCharV2(string& s) {
    int charCount[26] = {0};

    for (char c : s) {
        int index = c - 'a';

        if (charCount[index] != 0)
            return c;

        charCount[index]++;
    }

    return '$';
}

void solve() {
    string s = "hello geeks";
    cout << firstRepeatingCharV2(s) << endl;
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