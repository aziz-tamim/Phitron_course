// Question: Create a singly linked list and check if the linked list contains any duplicate value. You can assume that the maximum value will be 100.

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

// void cnt_duplicate_val(Node* head)
// {
//     int freq[101] = {0};

//     Node* tmp = head;
//     while(tmp != NULL)
//     {
//         freq[tmp->val]++;
//         if(freq[tmp->val] > 1)
//         {
//             cout << "YES" << endl;
//         }
//         tmp = tmp->next;
//     }
//     cout << "NO" << endl;
// }

// void print_linked_list(Node* head)
// {
//     Node* tmp = head;
//     while(tmp != NULL)
//     {
//         cout << tmp->val << " ";
//         tmp = tmp->next;
//     }
// }

// int main()
// {
//     Node* head = new Node(5);
//     Node* a = new Node(4);
//     Node* b = new Node(8);
//     Node* c = new Node(6);
//     Node* d = new Node(2);
//     Node* e = new Node(1);

//     head->next = a;
//     a->next = b;
//     b->next = c;
//     c->next = d;
//     d->next = e;

//     cnt_duplicate_val(head);
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

void cnt_duplicate_val(Node* head)
{
    int freq[101] = {0};

    Node* tmp = head;
    while(tmp != NULL)
    {
        freq[tmp->val]++;
        if(freq[tmp->val] > 1)
        {
            cout << "YES" << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "NO" << endl;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = new Node(2);
    Node* a = new Node(4);
    Node* b = new Node(5);
    Node* c = new Node(6);
    Node* d = new Node(7);
    Node* e = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    cnt_duplicate_val(head);
    print_linked_list(head);
    return 0;
}