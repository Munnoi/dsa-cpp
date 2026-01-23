#include <bits/stdc++.h>
using namespace std;

// Time - O(n^3), Space - O(1)
int maxProductOfTripletV1(vector<int>& arr) {
    int n = arr.size();
    int maxProduct = INT_MIN;
    for (int i = 0; i < n - 2; i++)
        for (int j = i + 1; j < n - 1; j++)
            for (int k = j + 1; k < n; k++)
                maxProduct = max(maxProduct, arr[i] * arr[j] * arr[k]);
    return maxProduct;
}

// Time - O(n log n), Space - O(1)
int maxProductOfTripletV2(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int n = arr.size();
    return max(arr[0] * arr[1] * arr[n - 1], arr[n - 1] * arr[n - 2] * arr[n - 3]);
}

// Time - O(n), Space - O(1)
int maxProductOfTripletV3(vector<int>& arr) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;

    for (int num : arr) {
        // Update maximums
        if (num > max1) {
            max3 = max2;
            max2 = max1;
            max1 = num;
        } else if (num > max2) {
            max3 = max2;
            max2 = num;
        } else if (num > max3) {
            max3 = num;
        }

        // Update minimums
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2) {
            min2 = num;
        }
    }

    return max(min1 * min2 * max1, max1 * max2 * max3);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {10, 3, 5, 6, 20};
    cout << maxProductOfTripletV3(arr) << "\n";

    return 0;
}