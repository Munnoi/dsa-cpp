#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
bool isPalindromeV1(string s) {
    int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

// Time - O(n), Space - O(n)
bool isPalindromeV2(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

// Time - O(n), Space - O(1)
bool isPalindromeV3(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "abba";
    cout << isPalindromeV2(s) << endl;

    return 0;
}