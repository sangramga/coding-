//Level Order Tree Traversal
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
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root->data = data;
	root->left = NULL;
	root->right = NULL;
	return root;
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

void _levelOrderTraversal(struct node *root, int l)
{
	if(root==NULL)
		return ;
	if(l==1)
	{
		cout<<root->data<<" ";
		return;
	}
	else if(l>1)
	{
		_levelOrderTraversal(root->left,l-1);
		_levelOrderTraversal(root->right,l-1);
	}
}
void levelOrderTraversal(struct node *root)
{
	int t = height(root);
	for(int i =1;i<=t;i++)
		_levelOrderTraversal(root,i);
}
int main()
{
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->right->left = newnode(4);
	root->right->left->right = newnode(5);
	root->left->left = newnode(7);
	root->left->left->left = newnode(6);
	levelOrderTraversal(root);
	return 0;
}
