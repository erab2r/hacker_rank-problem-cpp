// Given a list of n integers where the i-th element represents Kefa's earnings on the i-th day, find the length of the longest non-decreasing subsegment of the array.

// A subsegment is a continuous portion of the array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    int mxLn = 1; 
    int crLn = 1;

    for (int i=1;i<n;i++) {
        if (a[i] >= a[i - 1]) {
            crLn++;
        } else {
            crLn = 1;
        }
        mxLn = max(mxLn, crLn);
    }
 
    cout << mxLn << endl;
    return 0;
}
