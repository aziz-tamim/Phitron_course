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

void print_reverse(Node* tmp)
{
    // base case
    if(tmp == NULL)
    {
        return;
    }
    print_reverse(tmp->next);
    cout << tmp->val << endl;
}

void max_count(Node* head)
{
    int mx = INT_MIN;
    int min = INT_MAX;
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val > mx)
        {
            mx = tmp->val;
        }
        else if(tmp->val < min)
        {
            min = tmp->val;
        }
        else
        {
            tmp = tmp->next;
        }
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
    max_count(head);
    return 0;
}