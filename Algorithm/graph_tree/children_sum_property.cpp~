//Check for Children Sum Property in a Binary Tree.
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
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data  = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
int sumProperty(struct node *root)
{
	int ldata =0, rdata = 0;
	if(root==NULL||root->right==NULL&&root->left==NULL)
		return 1;
	if(root->left!=NULL)
		ldata = root->left->data;
	if(root->right!=NULL)
		rdata = root->right->data;
	if((root->data == (ldata + rdata))&&sumProperty(root->right)&&sumProperty(root->left))
		return 1;
	else
		return 0;
}
int main()
{
	struct node *root = newnode(7);
	root->left = newnode(4);
	root->right = newnode(3);
	root->left->left = newnode(2);
	root->left->right = newnode(1);
	if(sumProperty(root))
		cout<<"This tree satisfy the sum property\n";
	else
		cout<<"This tree does not satisfy the sum property\n";
	return 0;
}
