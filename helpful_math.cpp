// Given a string representing a valid sum of numbers using only 1, 2, and 3, separated by "+", you must sort the numbers in non-decreasing order and return the new valid sum as a string.
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<char> nums;
    for (char ch : s) {
        if (ch != '+') {
            nums.push_back(ch);
        }
    }

    sort(nums.begin(), nums.end());

    for (size_t i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i + 1 < nums.size()) {
            cout << '+';
        }
    }

    cout << endl;
    return 0;
}
