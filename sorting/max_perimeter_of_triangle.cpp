#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
int maximumPerimeterTriangleV1(vector<int>& arr) {
    sort(arr.rbegin(), arr.rend()); // Sort in descending order
    for (size_t i = 0; i < arr.size() - 2; ++i)
        if (arr[i] < arr[i + 1] + arr[i + 2]) {
            return arr[i] + arr[i + 1] + arr[i + 2];
        }
    return 0;
}

// Time - O(n^3), Space - O(1)
int maximumPerimeterTriangleV2(vector<int>& arr) {
    int maxPerimeter = 0;
    for (int i = 0; i < arr.size(); ++i)
        for (int j = i + 1; j < arr.size(); ++j)
            for (int k = j + 1; k < arr.size(); ++k)
                if (arr[i] + arr[j] > arr[k] && arr[j] + arr[k] > arr[i] && arr[k] + arr[i] > arr[j])
                    maxPerimeter = max(maxPerimeter, arr[i] + arr[j] + arr[k]);
    return maxPerimeter;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {6, 1, 6, 5, 8, 4};
    cout << maximumPerimeterTriangleV2(arr) << endl;

    return 0;
}