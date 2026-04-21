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

// Time - O(n), Space - O(n)
void rearrangeV1(vector<int>& arr) {
    vector<int> pos, neg;

    for (int num : arr)
        if (num > 0) pos.push_back(num);
        else neg.push_back(num);

    int posIdx = 0, negIdx = 0;
    int i = 0;

    while (posIdx < pos.size() && negIdx < neg.size())
        if (i % 2 == 0)
            arr[i++] = pos[posIdx++];
        else
            arr[i++] = neg[negIdx++];

    while (posIdx < pos.size())
        arr[i++] = pos[posIdx++];

    while (negIdx < neg.size())
        arr[i++] = neg[negIdx++];
}

void solve() {
    vector<int> arr = {1, 2, 3, -4, -1, 4};
    rearrangeV1(arr);
    for (int num : arr)
        cout << num << " ";
    cout << endl;
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