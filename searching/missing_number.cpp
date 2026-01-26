#include <bits/stdc++.h>
using namespace std;

// Time - O(n log n), Space - O(1)
int missingNumberV1(vector<int>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end()); // 1 2 3 4 5 7 8
    for (int i = 0; i < n; i++)
        if (arr[i] != i + 1)
            return i + 1;
    return n + 1; // If all numbers from 1 to n are present
}

// Time - O(n), Space - O(n)
int missingNumberV2(vector<int>& arr) {
    int n = arr.size();
    vector<bool> present(n + 1, false); // {false, false, ..., false, upto n+1 elements}
    for (int num : arr)
        if (num >= 1 && num <= n)
            present[num] = true; // Mark the number (index) as present (true)

    for (int i = 1; i <= n; i++)
        if (!present[i])
            return i;
    return n + 1;
}

// Time - O(n), Space - O(1)
int missingNumberV3(vector<int>& arr) {
    int n = arr.size()+1; // Since one number is missing
    int expectedSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;
    for (int num : arr)
        actualSum += num;
    return expectedSum - actualSum; // The difference is the missing number
}

int missingNumberV4(vector<int>& arr) {
    int n = arr.size()+1; // Since one number is missing
    int xorAll = 0;
    for (int i = 1; i <= n; i++)
        xorAll ^= i; // XOR of all numbers from 1 to n

    int xorArr = 0;
    for (int num : arr)
        xorArr ^= num; // XOR of all elements in the array

    return xorAll ^ xorArr; // The result is the missing number
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {8, 2, 4, 5, 3, 7, 1};
    cout << missingNumberV4(arr) << "\n";

    return 0;
}
