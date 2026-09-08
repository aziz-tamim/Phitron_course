// AUTHOR :- ABDUL AZIZ TAMIM
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
#define sp " "

class Node {
    public:
        int val;
        Node* next;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    Node a, b, c;
    a.val = 10;
    b.val = 20;
    c.val = 30;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << nl;
    cout << a.next->val << nl;
    cout << a.next->next->val << nl;
    return 0;
}