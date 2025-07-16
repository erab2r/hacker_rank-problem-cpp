
// Let an array a of length n be given. You are also given an integer k. You need to find an integer x (1 ≤ x ≤ 10⁹) such that: - Exactly k elements of the array a are less than or equal to x

// If there are multiple such values of x, return any of them. If no such x exists, return -1.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    int x;
    if (k == 0) {
        if (a[0] == 1) {
            cout << -1 << endl;
        } else {
            cout << a[0] - 1 << endl;
        }
    } else {
        x = a[k - 1];
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] <= x){
                count++;
            }
            else{
                break;
            } 
        }

        if (count == k) {
            cout << x << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}