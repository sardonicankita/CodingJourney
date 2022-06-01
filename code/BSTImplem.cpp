#include<iostream>
using namespace std;

//creating the tree structure 
struct Node
{ 
    int data; 
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

//preorder
//root->left subtree->right subtree

void preorder(struct Node* &root){
    if(root==NULL)return ;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//inorder
//left subtree->root->right subtree

void inorder(struct Node* root){
    if(root==NULL)return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//postorder traversal
//left subree->right subtree -> root

void postorder(struct Node* root){
    if(!root)return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    struct Node* root=new Node(1);
    root->right=new Node(3);
    root->left=new Node(2);

    root->left->left=new Node(4);
    root->right->right=new Node(5);
    root->right->right->right=new Node(7);
    root->left->left->left=new Node(6);
    cout<<"The preorder traversal is: ";
    preorder(root);

    cout<<"\nThe inorder traversal is: ";
    inorder(root);

    cout<<"\nThe inorder traversal is: ";
    postorder(root);

    return 0;
}