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
int maxProfitV1(vector<int>& arr) {
    int n = arr.size();
    int profit = 0;

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            profit = max(profit, arr[j] - arr[i]);

    return profit;
}

// Time - O(n), Space - O(1)
int maxProfitV2(vector<int>& arr) {
    int n = arr.size();
    int minSoFar = arr[0];
    int profit = 0;

    for (int i = 1; i < n; i++) {
        minSoFar = min(minSoFar, arr[i]);
        profit = max(profit, arr[i] - minSoFar);
    }

    return profit;
}

void solve() {
    vector<int> prices = {7, 10, 1, 3, 6, 9, 2};
    cout << maxProfitV2(prices) << endl;
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