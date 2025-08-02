// #include<bits/stdc++.h>
// using namespace std;

// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void print_linked_list(Node* head)
// {
//     Node* tmp = head;
//     bool issorted = true;

//     while (tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         if(tmp->next != NULL && tmp->val > tmp->next->val)
//         {
//             issorted = false;
//         }
//         tmp = tmp->next;
//     }
//     cout << endl;
//     if(issorted)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }
// }

// int main()
// {
//     Node* head = new Node(1);
//     Node* a = new Node(5);
//     Node* b = new Node(6);
//     Node* c = new Node(8);
//     Node* d = new Node(9);

//     head->next = a;
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     print_linked_list(head);
//     return 0;
// }



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

void print_linked_list(Node* head)
{
    Node* tmp = head;
    bool issorted = true;

    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        if(tmp->next != NULL && tmp->val > tmp->next->val)
        {
            issorted = false;
        }
        tmp = tmp->next;
    }
    cout << endl;
    if(issorted)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    Node* head = new Node(8);
    Node* a = new Node(4);
    Node* b = new Node(6);
    Node* c = new Node(5);
    Node* d = new Node(8);
    Node* e = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    print_linked_list(head);
    return 0;
}