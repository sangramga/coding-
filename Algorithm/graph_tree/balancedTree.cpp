//to determine if a binary tree is height-balanced?
#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newnode(int data)
{
	struct node *node= (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int height(struct node *root)
{
	if(root==NULL)
		return 0;
	return 1 + max(height(root->left),height(root->right));
}
int balancedHeight(struct node *root)
{
	if(root==NULL)
		return 1;
	return (abs(height(root->left)-height(root->right))<2)&&balancedHeight(root->left)&&balancedHeight(root->right);
}

int main()
{
	struct node *root = newnode(1);
	root->right = newnode(2);
	root->left = newnode(3);
	root->right->left = newnode(4);
	if(balancedHeight(root))
		cout<<"The given binary tree is height balanced\n";
	else
		cout<<"The given binary tree is not height balanced\n";
	return 0;
}
