for inorder transversal 

                       5
                     3   7
                Null   4 6  10              start from 5 to left 3 then NULL so print 3 to right 4 then 4's left is null so print 4  return to 3 return to 5 print 5
                                                         to right 7 left is 6 then 6's left is null so print 6 then return to 7 print 7 then move to 10 print 10 
                                                                  



  #include <iostream>
#include <stack>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void iterativeInOrder(struct Node* root, vector<int>& inorder)
{
    stack<Node*> s;
    Node* curr = root;

    while (curr != NULL || !s.empty()) {
        while (curr != NULL) {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        inorder.push_back(curr->data);
        curr = curr->right;
    }
}

void iterativePreOrder(struct Node* root, vector<int>& preorder)
{
    if (root == NULL)
        return;

    stack<Node*> s;
    s.push(root);

    while (!s.empty()) {
        Node* node = s.top();
        s.pop();
        preorder.push_back(node->data);

        if (node->right)
            s.push(node->right);
        if (node->left)
            s.push(node->left);
    }
}

void iterativePostOrder(struct Node* root, vector<int>& postorder)
{
    stack<Node*> s;
    Node* curr = root;
    Node* prev = NULL;

    while (curr || !s.empty()) {
        while (curr) {
            s.push(curr);
            curr = curr->left;
        }
        
        curr = s.top();
        
        if (curr->right && curr->right != prev) {
            curr = curr->right;
        } else {
            postorder.push_back(curr->data);
            prev = curr;
            s.pop();
            curr = NULL;
        }
    }
}
// void iterativePostOrder(struct Node* root, vector<int>& postorder)
// {
//     if (root == NULL)
//         return;

//     stack<Node*> s1, s2;
//     s1.push(root);

//     while (!s1.empty()) {
//         Node* node = s1.top();
//         s1.pop();
//         s2.push(node);

//         if (node->left)
//             s1.push(node->left);
//         if (node->right)
//             s1.push(node->right);
//     }

//     while (!s2.empty()) {
//         Node* node = s2.top();
//         s2.pop();
//         postorder.push_back(node->data);
//     }
// }


int main()
{
    /* Constructed binary tree is
            1
           / \
          2   3
         / \
        4   5
    */
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<int> inorder;
    vector<int> preorder;
    vector<int> postorder;

    iterativeInOrder(root, inorder);
    iterativePreOrder(root, preorder);
    iterativePostOrder(root, postorder);

    cout << "Inorder traversal: ";
    for (auto i : inorder)
        cout << i << " ";
    cout << endl;

    cout << "Preorder traversal: ";
    for (auto i : preorder)
        cout << i << " ";
    cout << endl;

    cout << "Postorder traversal: ";
    for (auto i : postorder)
        cout << i << " ";
    cout << endl;

    return 0;
}
