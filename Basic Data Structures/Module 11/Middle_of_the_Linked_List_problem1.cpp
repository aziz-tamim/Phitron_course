#include <bits/stdc++.h>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;
    ListNode(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(ListNode*& head, ListNode*& tail, int val) {
    ListNode* newNode = new ListNode(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

int size_cnt(ListNode* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

ListNode* middleNode(ListNode* head) {
    int sz = size_cnt(head);
    for (int i = 0; i < sz / 2; i++) {
        head = head->next;
    }
    return head;
}

void print_list(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    ListNode* head = NULL;
    ListNode* tail = NULL;

    int val;
    while (true) {
        cin >> val;
        if (val == -1) break;
        insert_at_tail(head, tail, val);
    }

    ListNode* middle = middleNode(head);
    print_list(middle);

    return 0;
}
