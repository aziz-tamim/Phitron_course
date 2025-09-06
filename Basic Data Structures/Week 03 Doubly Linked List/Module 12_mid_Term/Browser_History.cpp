// Contest Link --> https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-7/challenges
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        string val;
        Node* next;
        Node* prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, string val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void address(Node* &head, Node* &curr, string add)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        if(tmp->val == add)
        {
            curr = tmp;
            cout << curr->val << endl;
            return;
        }
        tmp = tmp->next;
    }
    cout << "Not Available" << endl;
}

void next(Node* &curr)
{
    if(curr->next != NULL)
    {
        curr = curr->next;
        cout << curr->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

void prev(Node* &curr)
{
    if(curr->prev != NULL)
    {
        curr = curr->prev;
        cout << curr->val << endl;
    }
    else
    {
        cout << "Not Available" << endl;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    while(true)
    {
        string line;
        cin >> line;
        if(line=="end")
        {
            break;
        }
        insert_at_tail(head,tail,line);
    }

    Node* curr = head;

    int q;
    cin >> q;
    while(q--)
    {
        string word;
        cin >> word;
        if(word == "visit")
        {
            string add;
            cin >> add;
            address(head, curr, add);
        }
        else if(word == "next")
        {
            next(curr);
        }
        else if(word == "prev")
        {
            prev(curr);
        }
    }
    return 0;
}
