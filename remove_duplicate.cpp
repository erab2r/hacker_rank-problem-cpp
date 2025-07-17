// You will be given a linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list in ascending order.
// Sample Input 0

// 1 2 3 4 5 -1
// Sample Output 0

// 1 2 3 4 5 
// Sample Input 1

// 1 2 4 2 3 5 1 4 5 2 6 1 -1
// Sample Output 1

// 1 2 3 4 5 6 

#include <iostream>
#include <list>
#include <set>
using namespace std;

int main() {
    list<int> my_List;
    int val;
    while (cin >> val && val != -1) {
        my_List.push_back(val);
    }
    set<int> uniqueValues(my_List.begin(), my_List.end());
    list<int> final_List(uniqueValues.begin(), uniqueValues.end());
    for (int v : final_List) {
        cout << v << " ";
    }

    return 0;
}
