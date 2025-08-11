// docs link -> https://docs.google.com/document/d/1EXLsPmtlVXNjdqk49BCcLbPHf0n4UBlP/edit?tab=t.0

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

void max_count(Node* head)
{
    int mx = INT_MIN;
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val > mx)
        {
            mx = tmp->val;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    cout << mx << " ";
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
    max_count(head);
    return 0;
}