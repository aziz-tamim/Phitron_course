// docs link --> https://docs.google.com/document/d/1KJAVqqr7pqeMR0z5ATAXmKbIQo2JazHf/edit?tab=t.0

// Question: Create a singly linked list and print the size of the linked list.

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
//     int cnt = 0;
//     while(tmp != NULL)
//     {
//         cnt++;
//         tmp = tmp->next;
//     }
//     cout << cnt << endl;
// }

// int main()
// {
//     Node* head = new Node(2);
//     Node* a = new Node(1);
//     Node* b = new Node(5);
//     Node* c = new Node(3);
//     Node* d = new Node(4);
//     Node* e = new Node(8);
//     Node* f = new Node(9);

//     head->next = a;
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;
//     e->next = f;

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
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    cout << cnt << endl;
}

int main()
{
    Node* head = new Node(5);
    Node* a = new Node(1);
    Node* b = new Node(4);
    Node* c = new Node(5);

    head->next = a;
    a->next = b;
    b->next = c;
    
    print_linked_list(head);
    return 0;
}