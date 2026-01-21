#include <bits/stdc++.h>
using namespace std;

// Time - O(n log n), Space - O(1)
int secondLargestV1(vector<int>& arr) {
    sort(arr.begin(), arr.end(), greater<int>()); // Sort in descending order
    return arr[1];
}

// Time - O(n), Space - O(1)
int secondLargestV2(vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    // Find the largest element
    for (int num : arr)
        if (num > largest)
            largest = num;

    // Find the second largest element
    for (int num : arr)
        if (num < largest && num > secondLargest)
            secondLargest = num;

    return secondLargest;
}

// Time - O(n), Space - O(1)
int secondLargestV3(vector<int>& arr) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int num : arr)
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num < largest) {
            secondLargest = num;
        }
    return secondLargest;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {3, 5, 7, 2, 8, 6, 1, 4};
    cout << "Second largest element is: " << secondLargestV3(arr) << "\n";

    return 0;
}