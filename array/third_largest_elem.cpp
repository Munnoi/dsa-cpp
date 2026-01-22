#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
int thirdLargestElementV1(const vector<int>& arr) {
    int first = INT_MIN, second = INT_MIN, third = INT_MIN;
    for (int num : arr)
        if (num > first) {
            third = second;
            second = first;
            first = num;
        } else if (num > second) {
            third = second;
            second = num;
        } else if (num > third) {                               
            third = num;
        }
    return (third == INT_MIN) ? -1 : third;
}

// Time - O(n log n), Space - O(1)
int thirdLargestElementV2(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>());
    return arr.size() >= 3 ? arr[2] : -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 2, 3, 4, 5};
    cout << thirdLargestElementV2(arr) << "\n";

    return 0;
}