#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
void reverseStringV1(string &s) {
    int left = 0, right = s.size() - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}

// Time - O(n), Space - O(1)
void reverseStringV2(string &s) {
    reverse(s.begin(), s.end());
}

// Time - O(n), Space - O(1)
void reverseStringV3(string &s) {
    for (int i = 0; i < s.size() / 2; i++) {
        swap(s[i], s[s.size() - 1 - i]);
    }
}

// Time - O(n), Space - O(n)
void reverseStringV4(string &s) {
    stack<char> st;
    for (char c : s) {
        st.push(c);
    }
    for (int i = 0; i < s.size(); i++) {
        s[i] = st.top();
        st.pop();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "abdcfe";
    reverseStringV4(s);
    cout << s << endl;

    return 0;
}