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

void insert_at_head(Node* &head, Node* &tail, int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insert_at_any_pos(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);
    Node* tmp = head;
    for(int i=1; i<idx; i++)
    {
        tmp = tmp->next;
    }
    newnode->next = tmp->next;
    tmp->next->prev = newnode;
    tmp->next = newnode;
    newnode->prev = tmp;
}

void print_forward(Node* head)
{
    Node* tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_backward(Node* tail)
{
    Node* tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}

int size_linked_list(Node* head)
{
    int cnt = 0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    int q, val;
    cin >> q;
    while(q--)
    {
        int idx;
        cin >> idx >> val; 
        int sz = size_linked_list(head);
        if(idx > sz)
        {
            cout << "Invalid\n";
            continue;
        }
        else if(idx == sz)
        {
            insert_at_tail(head,tail,val);
        }
        else if(idx == 0)
        {
            insert_at_head(head, tail, val);
        }
        else
        {
            insert_at_any_pos(head, idx, val);
        }
        print_forward(head);
        print_backward(tail);
    }
    return 0;
}