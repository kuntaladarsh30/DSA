#include<iostream>
using namespace std;

struct Node
{
    Node *left,*right;
    int key;
    Node(int k)
    {
        key = k;
        left = right = NULL;

    }
};



 int main()
 {
    Node *root = new Node(50);
    root -> left = new Node(50);
    root -> right = new Node(100);
    root -> left -> right = new Node(50);
    cout << (root -> right -> key);
    return 0;
 }
 