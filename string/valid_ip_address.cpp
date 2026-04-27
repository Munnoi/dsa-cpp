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

bool isValidIP(string& s) {
    int n = s.size();

    if (n < 7) return false;

    vector<string> v;
    stringstream ss(s);

    while (ss.good()) {
        string substr;
        getline(ss, substr, '.');
        v.push_back(substr);
    }

    if (v.size() != 4) return false;

    for (string s : v) {
        if (s.size() > 1) {
            if (s[0] == '0')
                return false;
        }

        for (char c : s) {
            if (isalpha(c))
                return false;
        }

        if (stoi(s) > 255)
            return false;
    }

    return true;
}

void solve() {
    string s = "128.0.0.1";
    cout << (isValidIP(s) ? "Yes" : "No") << endl;
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