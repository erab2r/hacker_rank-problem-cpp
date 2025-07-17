// You need to take a doubly linked list of integer value as input. You need to tell if the doubly linked list forms a palindrome or not.

// Note: You need to solve this using Doubly Linked List, otherwise you will not get marks.


#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;       
    }
};

void insert_at_tail(Node*& head, Node*& tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

bool is_palindrome(Node* head, Node* tail) {
    while (head != NULL && tail != NULL && head != tail && head->prev != tail) {
        if (head->val != tail->val) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }
    return true;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1){
           break;  
        } 
        insert_at_tail(head, tail, val);
    }

    if (is_palindrome(head, tail)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

