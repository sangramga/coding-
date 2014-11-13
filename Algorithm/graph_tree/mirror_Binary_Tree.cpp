//Write an Efficient C Function to Convert a Binary Tree into its Mirror Tree
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newnode(int data)
{
struct node *node = (struct node*)malloc(sizeof(struct node));
node->data = data;
node->left = NULL;
node->right = NULL;
return node;
}
void mirrorTree(struct node *root)
{
	if(root==NULL)
		return ;
	mirrorTree(root->left);
	mirrorTree(root->right);
	struct node* tmp;
	tmp = root->left;
	root->left = root->right;
	root->right = tmp;
}
void inorder(struct node *node)
{
	if(node==NULL)
		return ;
	inorder(node->left);
	cout<<node->data<<" ";
	inorder(node->right);
}
int main()
{
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
	root->right = newnode(2);
	root->left = newnode(3);
	root->right->left = newnode(4);
	root->left->right = newnode(5);
	inorder(root);
	mirrorTree(root);
	cout<<endl;
	inorder(root);
	return 0;
}

