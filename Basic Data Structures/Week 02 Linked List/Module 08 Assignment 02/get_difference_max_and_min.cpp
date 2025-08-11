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

void max_min_def_count(Node* head)
{
    int max = INT_MIN;
    int min = INT_MAX;

    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val > max)
        {
            max = tmp->val;
        }
        if(tmp->val < min)
        {
            min = tmp->val;
        }
        tmp = tmp->next;
    }
    int deference = max - min;
    cout << deference << endl;
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
    max_min_def_count(head);
    return 0;
}