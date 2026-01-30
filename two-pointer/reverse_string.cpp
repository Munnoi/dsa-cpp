#include <bits/stdc++.h>
using namespace std;

// Time - O(n), Space - O(n)
// TODO: Review this code
string reverseStringV1(string& str) {
    // Mark spaces in result
    int n = str.size();
    string result(n, '\0');
    for (int i = 0; i < n; i++)
        if (str[i] == ' ')
            result[i] = ' ';

    // Traverse input string from beginning
    // and put characters in result from end
    int j = n - 1;
    for (int i = 0; i < str.length(); i++) {
        
        // Ignore spaces in input string
        if (str[i] != ' ') {
            
            // ignore spaces in result.
            while(result[j] == ' ')
                j--;

            result[j] = str[i];
            j--;
        }
    }
    return result;
}

// Time - O(n), Space - O(1)
// TODO: Review this code
string reverseStringV2(string &str) {
    int n = str.length();

    // Initialize two pointers as two corners
    int start = 0;
    int end = n - 1;

    // Move both pointers toward each other
    while (start < end) {

        // If character at start or end is space,
        // ignore it
        if (str[start] == ' ') {
            start++;
            continue;
        }
        else if (str[end] == ' ') {
            end--;
            continue;
        }

        // If both are not spaces, do swap
        else {
            swap(str[start], str[end]);
            start++;
            end--;
        }
    }
    return str;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s = "internship at geeks for geeks";
    cout << reverseStringV2(s) << "\n";

    return 0;
}