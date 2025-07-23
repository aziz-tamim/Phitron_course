// Docs Link --> https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit?tab=t.0

// Question: Take two stacks of size N and M as input and check if both of them are the same or not. Don’t use STL stack to solve this problem.

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++;
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
    void pop()
    {
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        delete deleteNode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }
        else
        {
            tail->next = NULL;
        }
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        return head == NULL;
    }
    int size()
    {
        return sz;
    }
};

bool same_size(myStack a, myStack b)
{
    if(a.size() != b.size())
    {
        return false;
    }
    while(!a.empty() && !b.empty())
    {
        if(a.top() != b.top())
        {
            return false;
        }
        a.pop();
        b.pop();
    }
    return true;
}

int main()
{
    myStack st1, st2;
    int n, m;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }
    cin >> m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    if(same_size(st1,st2))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
