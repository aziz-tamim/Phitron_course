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
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_duplicate(Node* head)
{
    for(Node* i = head; i!=NULL; i = i->next)
    {
        for(Node* j = i; j->next!=NULL;)
        {
            if(j->next->val == i->val)
            {
                Node* duplecate = j->next;
                j->next = j->next->next;
                delete duplecate;
            }
            else
            {
                j = j->next;
            }
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
    delete_duplicate(head);
    print_list(head);
    return 0;
}
