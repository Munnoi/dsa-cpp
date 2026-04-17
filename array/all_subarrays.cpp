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

// Time - O(n^3), Space - O(1)
void generateAllSubarraysV1(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            for (int k = i; k <= j; k++)
                cout << arr[k] << " ";
            cout << endl;
        }
}

// Time - O(n^3), Space - O(n)
void generateAllSubarraysV2(vector<int>& arr, int start, int end) {
    if (end == arr.size()) return;
    else if (start > end) generateAllSubarraysV2(arr, 0, end + 1);
    else {
        for (int i = start; i <= end; i++)
            cout << arr[i] << " ";
        cout << endl;
        generateAllSubarraysV2(arr, start + 1, end);
    }
}

void solve() {
    vector<int> arr = {1, 2, 3, 4};
    generateAllSubarraysV2(arr, 0, 0);
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