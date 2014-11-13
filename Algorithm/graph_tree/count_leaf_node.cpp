//Program to count leaf nodes in a binary tree
#include<iostream>
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
int leafNodes(struct node *root)
{
	if(root==NULL)
		return 0;
	else if (root->left ==NULL&&root->right==NULL)
		return 1;
	else
		return leafNodes(root->left) + leafNodes(root->right);
}
int main()
{
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	cout<<leafNodes(root)<<endl;
	return 0;
}
