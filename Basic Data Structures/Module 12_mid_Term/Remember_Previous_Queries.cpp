// Contest Link --> https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-7/challenges
#include<bits/stdc++.h>
using namespace std;

void print_forward(list<int>&l)
{
    cout << "L -> ";
    for(auto v : l)
    {
        cout << v << " ";
    }
    cout << endl;
}

void print_backward(list<int> l)
{
    cout << "R -> ";
    while(!l.empty())
    {
        cout << l.back() << " ";
        l.pop_back();
    }
    cout << endl;
}

void insert_at_head(list<int>&l, int val)
{
    l.push_front(val);
}

void insert_at_tail(list<int>&l, int val)
{
    l.push_back(val);
}

void delete_at_index(list<int>&l, int idx)
{
    int n = l.size();
    if(idx < 0 || idx >= n)
    {
        return;
    }
    auto it = l.begin();
    for(int i=0; i<idx; i++)
    {
        it++;
    }
    l.erase(it);
}

int main()
{
    list<int> l;
    int q;
    cin >> q;
    while(q--)
    {
        int idx, val;
        cin >> idx >> val;
        if(idx == 0)
        {
            insert_at_head(l,val);
        }
        else if(idx == 1)
        {
            insert_at_tail(l, val);
        }
        else if(idx == 2)
        {
            delete_at_index(l, val);
        }
        print_forward(l);
        print_backward(l);
    }
    return 0;
}