// Docs Link --> https://docs.google.com/document/d/13vRt1XJ7C_rOw-DXi2-ayTxAPM6zMM67/edit?tab=t.0

// Question: Take a doubly linked list as input and reverse it. After that print the linked list.

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

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

void print_forward(Node* &head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

void reverse_doubly(Node* head, Node* tail)
{
    for(Node* i=head, *j=tail; i!=j && i->prev!=j; i=i->next, j=j->prev)
    {
        swap(i->val,j->val);
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val; 
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
    reverse_doubly(head,tail);
    print_forward(head);
    return 0;
}