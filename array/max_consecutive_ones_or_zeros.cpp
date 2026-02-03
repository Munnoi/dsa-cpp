#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
int maxConsecutiveOnesOrZerosV1(const vector<int>& arr) {
    int maxCount = 1;
    int currentCount = 1;
    int n = arr.size();
    for (int i = 1; i < n; i++)
        if (arr[i] == arr[i - 1]) {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        } else {
            currentCount = 1;
        }
    return maxCount;
}

// Time - O(n), Space - O(1)
int maxConsecutiveOnesOrZerosV2(const vector<int>& arr) {
    int maxCount = 0, count = 0, prev = -1;
    for (int num : arr) {
        if (prev ^ num == 0)
            count++;
        else {
            maxCount = max(maxCount, count);
            count = 1;
        }
        prev = num;
    }
    return max(maxCount, count);
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 1, 0, 0, 0, 1, 1, 1, 0};
    cout << maxConsecutiveOnesOrZerosV1(arr) << "\n";

    return 0;
}