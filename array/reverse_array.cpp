#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
void reverseArrayV1(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

// Time - O(n), Space - O(1)
void reverseArrayV2(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}

// Time - O(n), Space - O(n)
void reverseArrayV3(vector<int>& arr) {
    vector<int> temp(arr.size());
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        temp[i] = arr[n - 1 - i];
    }
    arr = temp;
}

// Time - O(n), Space - O(n)
void reverseArrayV4(vector<int>& arr) {
    stack<int> s;
    for (int num : arr) {
        s.push(num);
    }
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = s.top();
        s.pop();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> arr = {1, 4, 3, 2, 6, 5};

    cout << "Reversed array: " << endl;
    reverseArrayV4(arr);
    // Display the reversed array
    for (int num : arr)
        cout << num << " ";
    cout << endl;

    return 0;
}