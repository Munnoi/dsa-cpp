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
int majorityElementV1(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[i] == arr[j])
                count++;
        if (count > n / 2)
            return arr[i];
    }

    return -1;
}

// Time - O(n), Space - O(1)
int majorityElementV2(vector<int>& arr) {
    int n = arr.size();

    int count = 0;
    int candidate = -1;

    for (int &num : arr) {
        if (count == 0) {
            candidate = num;
            count = 1;
        } else if (num == candidate) {
            count++;
        } else {
            count--;
        }
    }

    for (int &num : arr) {
        if (num == candidate)
            count++;
    }

    if (count > n / 2)
        return candidate;

    return -1;
}

void solve() {
    vector<int> arr = {1, 1, 2, 1, 3, 5, 1};
    cout << majorityElementV2(arr) << endl;
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