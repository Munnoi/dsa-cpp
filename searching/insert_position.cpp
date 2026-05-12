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
int insertPositionV1(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++)
        if (arr[i] >= target)
            return i;
    return n;
}

// Time - O(log n), Space - O(1)
int insertPositionV2(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return left;
}

void solve() {
    vector<int> arr = {1, 3, 5, 6};  
    int k = 5;
    cout << insertPositionV2(arr, k) << endl;
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