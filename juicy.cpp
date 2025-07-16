#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> worms(n);
    vector<int> prefix(n);
    
    // Input piles
    for (int i = 0; i < n; ++i) {
        cin >> worms[i];
        if (i == 0)
            prefix[i] = worms[i];
        else
            prefix[i] = prefix[i-1] + worms[i];
    }

    int m;
    cin >> m;
    vector<int> queries(m);
    for (int i = 0; i < m; ++i) {
        cin >> queries[i];
    }

    // For each juicy worm label, find which pile it belongs to
    for (int i = 0; i < m; ++i) {
        int worm = queries[i];
        for (int j = 0; j < n; ++j) {
            if (worm <= prefix[j]) {
                cout << (j + 1) << endl; // pile number is 1-based
                break;
            }
        }
    }

    return 0;
}
