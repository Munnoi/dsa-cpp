#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(1)
void reverseWordsV1(string &s) {
    reverse(s.begin(), s.end());
    int n = s.size();
    int start = 0;
    for (int end = 0; end <= n; end++)
        if (end == n || s[end] == ' ') {
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
        }
}

// Time - O(n), Space - O(n)
void reverseWordsV2(string &s) {
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word)
        words.push_back(word);

    reverse(words.begin(), words.end());
    s = "";
    for (int i = 0; i < words.size(); i++) {
        s += words[i];
        if (i != words.size() - 1)
            s += " ";
    }
}

// Time - O(n), Space - O(n)
void reverseWordsV3(string &s) {
    int n = s.size();
    string result = "";
    int end = n;

    for (int i = n - 1; i >= 0; i--)
        if (s[i] == ' ') {
            result += s.substr(i + 1, end - i - 1) + " ";
            end = i;
        }
    result += s.substr(0, end);
    s = result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "I love coding";
    reverseWordsV3(s);
    cout << s << endl;

    return 0;
}