#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
void reverseInGroupsV1(vector<int>& arr, int k) {
    int n = arr.size();
    for (int i = 0; i < n; i += k) {
        int left = i;
        int right = min(i + k - 1, n - 1);
        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    return 0;
}