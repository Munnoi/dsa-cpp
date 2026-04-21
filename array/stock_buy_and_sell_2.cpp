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

// Time - O(n), Space - O(1)
int maxProfitV1(vector<int>& arr) {
    int n = arr.size();
    int profit = 0;

    for (int i = 1; i < n; i++)
        if (arr[i] > arr[i - 1])
            profit += arr[i] - arr[i - 1];

    return profit;
}

// Time - O(n), Space - O(1)
int maxProfitV2(vector<int>& arr) {
    int n = arr.size();
    int lMin = arr[0], lMax = arr[0];
    int res = 0;
    int i = 0;

    while (i < n - 1) {
        while (i < n - 1 && arr[i] >= arr[i + 1])
            i++;
        lMin = arr[i];

        while (i < n - 1 && arr[i] <= arr[i + 1])
            i++;
        lMax = arr[i];

        res += lMax - lMin;
    }

    return res;
}

// Time - O(2^n), Space - O(n)
int maxProfitV3(vector<int>& arr, int start, int end) {
    int res = 0;

    for (int i = start; i < end; i++)
        for (int j = i + 1; j <= end; j++) {
            if (arr[j] > arr[i]) {
                int curr = arr[j] - arr[i] + maxProfitV3(arr, start, i - 1) + maxProfitV3(arr, j + 1, end);
                res = max(res, curr);
            }
        }

    return res;
}

void solve() {
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    cout << maxProfitV3(prices, 0, prices.size() - 1) << endl;
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