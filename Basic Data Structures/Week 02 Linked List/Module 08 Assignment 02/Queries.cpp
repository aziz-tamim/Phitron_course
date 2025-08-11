// problem link -> https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-07/challenges

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
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
    tail = tail->next;
}

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
    head = newnode;
}

void delete_at_index(Node* &head, Node* &tail, int index)
{
    if(head == NULL)
    {
        return;
    }
    if(index == 0)
    {
        Node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL)
        {
            tail = NULL;
        }
        return;
    }
    Node* tmp = head;
    for(int i=0; i<index-1; i++)
    {
        if(tmp->next == NULL)
        {
            return;
        }
        tmp = tmp->next;
    }

    if(tmp->next == NULL)
    {
        return;
    }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    if(tmp->next == NULL)
    {
        tail = tmp;
    }
    delete deleteNode;
}

void print_linked_list(Node* head)
{
        Node* tmp = head;
        while(tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }

    int main()
    {
        Node* head = NULL;
        Node* tail = NULL;
        int q;
        cin >> q;
        while(q--)
        {
            int idx, val;
            cin>> idx >> val;
            if(idx == 0)
            {
                insert_at_head(head, tail, val);
            }
            else if(idx == 1)
            {
                insert_at_tail(head, tail, val);
            }
            else if(idx == 2)
            {
                delete_at_index(head, tail, val);
            }
            print_linked_list(head);
        }
        return 0;
    }
