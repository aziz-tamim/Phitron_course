// Question: Create a singly linked list and print the middle element. If there are multiple values in the middle print both.


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

//     tmp = head;
//     int mid = cnt/2;
//     if(cnt%2 == 1)
//     {
//         for(int i=0; i<mid; i++)
//         {
//             tmp = tmp->next;
//         }
//         cout << tmp->val << endl;
//     }
//     else
//     {
//         for(int i=0; i<mid-1; i++)
//         {
//             tmp = tmp->next;
//         }
//         cout << tmp->val << " " << tmp->next->val << endl;
//     }
// }

// int main()
// {
//     Node* head = new Node(2);
//     Node* a = new Node(4);
//     Node* b = new Node(6);
//     Node* c = new Node(8);
//     Node* d = new Node(10);

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

void print_linked_list(Node* &head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }

    tmp = head;
    int mid = cnt/2;
    if(cnt%2 == 1)
    {
        for(int i=0; i<mid; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
    else
    {
        for(int i=0; i<mid-1; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val << endl;
    }
}

int main()
{
    Node* head = new Node(1);
    Node* a = new Node(1);
    Node* b = new Node(3);
    Node* c = new Node(4);
    Node* d = new Node(5);
    Node* e = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list(head);
    return 0;
}