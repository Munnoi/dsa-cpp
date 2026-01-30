#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
int removeOccurrencesV1(vector<int>& arr, int ele) {
    int n = arr.size();
    int j = 0; // Pointer for the position of the next non-ele element

    for (int i = 0; i < n; ++i) {
        if (arr[i] != ele) {
            arr[j] = arr[i];
            j++;
        }
    }

    return j; // New length of the array after removal
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {0, 1, 3, 0, 2, 2, 4, 2};
    int ele = 2;
    cout << removeOccurrencesV1(arr, ele) << "\n";

    return 0;
}