// Docs Link --> https://docs.google.com/document/d/13vRt1XJ7C_rOw-DXi2-ayTxAPM6zMM67/edit?tab=t.0

// Question: Take two doubly linked lists as input and check if they are the same or not.

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

void size_count(Node* head, int &cnt)
{
    cnt = 0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
}

int main()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head1,tail1,val);
    }
    while (true)
    {
        cin >> val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head2,tail2,val);
    }

    int size1;
    size_count(head1,size1);
    int size2;
    size_count(head2,size2);

    if(size1 != size2)
    {
        cout << "NO" << endl;
        return 0;
    }

    Node* tmp1 = head1;
    Node* tmp2 = head2;
    int flag = 1;
    while(tmp1 != NULL && tmp2 != NULL)
    {
        if(tmp1->val != tmp2->val)
        {
            flag = 0;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    return 0;
}
