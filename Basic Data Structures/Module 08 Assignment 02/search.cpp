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

int search_idx(Node* head, int tar_val)
{   
    int idx = 0;
    Node* tmp = head;
    while (tmp != NULL)
    {
        if(tmp->val == tar_val)
        {
            return idx;
        }
        tmp = tmp->next;
        idx++;
    }
    return -1;
}

int main()
{
    int q;
    cin >> q;
    while(q--)
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
        
        int tar_val;
        cin >> tar_val;

        int resule = search_idx(head,tar_val);
        cout << resule << "\n";
    }
    return 0;
}