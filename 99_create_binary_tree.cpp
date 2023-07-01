/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
        
    }
    
};
Node * buildtree(Node *root){
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter left of"<<data<<" ";
    
    root->left=buildtree(root->left);
     cout<<"Enter right of"<<data<<" ";
    root->right=buildtree(root->right);
    return root;
}

int main()
{
    Node *root=NULL;
    root=buildtree(root);
    

    return 0;
}
