#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node *)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
void inorder(struct node* root)
{
	if(root==NULL)
		return ;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void preorder(struct node* root)
{
	if(root==NULL)
		return ;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node* root)
{
	if(root==NULL)
		return ;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}
int main()
{
	struct node* root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
	root->right = newnode(2);
	root->left = newnode(3);
	root->left->right = newnode(4);
	root->right->left = newnode(5);
	cout<<"Inorder traversal is : ";
	inorder(root);
	cout<<"\nPreorder traversal is : ";
	preorder(root);
	cout<<"\nPostorder traveral is : ";
	postorder(root);
	cout<<endl;
	return 0;
}
