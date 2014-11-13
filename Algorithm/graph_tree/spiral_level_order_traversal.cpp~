//Level order traversal in spiral form
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data ;
	struct node *left;
	struct node *right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
int max(int a , int b)
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
void _spiralTree(struct node *root,int l,bool ltr)
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
		if(ltr)
		{
			_spiralTree(root->left,l-1,ltr);
			_spiralTree(root->right,l-1,ltr);
		}
		else
		{
			_spiralTree(root->right,l-1,ltr);
			_spiralTree(root->left,l-1,ltr);
		}
	}
}
void spiralTree(struct node *root)
{
	int t = height(root);
	bool ltr = false;
	for(int i = 1;i<=t;i++){
		_spiralTree(root,i,ltr);
		ltr = !ltr;
	}
}
int main()
{
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
 	root->right = newnode(2);
	root->left = newnode(3);
	root->right->left = newnode(4);
	root->right->right = newnode(5);
	root->left->left = newnode(6);
	spiralTree(root);
	cout<<endl;
	return 0;
}
