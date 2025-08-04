#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root != NULL) q.push(root);
    while(!q.empty())
    {
        Node* p = q.front();
        q.pop();
        
        int l,r;
        cin >> l >> r;
        Node* myLeft, *myRight;
        if(l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if(r == -1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

bool check_leaf(Node* root)
{
    if(root == NULL)
        return false;
    if(root->left == NULL && root->right == NULL)
        return true;
    else
        return false;
}

void left_outertree(Node* root, vector<int>&v)
{
    // vector<int> v1;
    // Node* nod = root->left;
    // while(nod != NULL)
    // {
    //     v1.push_back(nod->val);
    //     if(nod->left)
    //         nod = nod->left;
    //     else
    //         nod = nod->right;
    // }
    // reverse(v1.begin(), v1.end());
    // for(int val : v1)
    // {
    //     v.push_back(val);
    // }

    if(!root)
        return;
    if(root->left || root->right)
    {
        if(root->left)
        {
            left_outertree(root->left, v);
        }
        else
        {
            left_outertree(root->right, v);
        }
        v.push_back(root->val);
    }
    else
    {
        v.push_back(root->val);
    }
}

void right_outertree(Node* root, vector<int>&v)
{
    // Node* nod = root->right;
    if(!root)
    {
        return;
    }
    if(root->left || root->right)
    {
        v.push_back(root->val);
        if(root->right)
        {
            right_outertree(root->right, v);
        }
        else
        {
            right_outertree(root->left, v);
        }
    }
    else
    {
        v.push_back(root->val);
    }
    // while(nod != NULL)
    // {
    //     v.push_back(nod->val);
    //     if(nod->right)
    //         nod = nod->right;
    //     else
    //         nod = nod->left;
    // }
}

int main()
{
    Node* root = input_tree();
    if(!root)
        return 0;
    
    vector<int> lefNode, rightNode;
    left_outertree(root->left, lefNode);
    right_outertree(root->right, rightNode);

    for(int val : lefNode)
    {
        cout << val << " ";
    }
    cout << root->val << " ";
    for(int val : rightNode)
    {
        cout << val << " ";
    }
    return 0;
}
