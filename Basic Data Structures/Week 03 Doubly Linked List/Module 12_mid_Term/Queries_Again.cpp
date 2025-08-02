// Contest Link --> https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-7/challenges
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

void insert_index(Node* &head, Node* &tail, int idx, int val, int &sz)
{
    if(idx < 0 || idx > sz)
    {
        cout << "Invalid" << endl;
        return;
    }
    Node* newNode = new Node(val);
    if(sz == 0)
    {
        head = newNode;
        tail = newNode;
    }
    else if(idx == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else if(idx == sz)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    {
        Node* tmp = head;
        for(int i=0; i< idx-1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
    }

    sz++;
    cout << "L -> ";
    print_forward(head);
    cout << "R -> ";
    print_backward(tail);
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;
    int sz = 0;
    while(q--)
    {
        int idx, val;
        cin >> idx >> val;
        insert_index(head, tail, idx, val, sz);
    }
    return 0;
}