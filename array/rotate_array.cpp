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

// Time - O(n*d), Space - O(1) 
void rotateArrayV1(vector<int>& arr, int d) {
   int n = arr.size();

   for (int i = 0; i < d; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = last;
   } 
}

// Time - O(n), Space - O(n) 
void rotateArrayV2(vector<int>& arr, int d) {
    int n = arr.size();

    d %= n;

    vector<int> temp(n);

    // Copy last d elements to the front of temp 
    for (int i = 0; i < d; i++)
        temp[i] = arr[n - d + i];

    // Copy the first n - d elements to the back of temp
    for (int i = 0; i < n - d; i++)
        temp[i + d] = arr[i];

    arr = temp;
}

// Time - O(n), Space - O(1) 
void rotateArrayV3(vector<int>& arr, int d) {
    int n = arr.size();

    d %= n;

    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
}

void solve() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int d = 2;  
    rotateArrayV3(arr, d);
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