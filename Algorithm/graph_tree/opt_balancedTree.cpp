#include<iostream>
#include<cmath>
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
	node->data  = data;
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
int optBalancedTree(struct node *root, int* ht)
{
	if(root==NULL)
	{
		*ht = 0;
		return 1;
	}
	int lh =0 ,rh =0;
	int l,r;
	l = optBalancedTree(root->left,&lh);
	r = optBalancedTree(root->right,&rh);
	*ht = 1 + max(lh,rh);
	if(abs(lh-rh)>1)
		return 0;
	else
		return l&&r;
}
int main()
{
	int height =0;
	struct node *root = newnode(1);
	root->right = newnode(2);
	root->left = newnode(3);
	root->right->right = newnode(4);
	root->right->right->right = newnode(5);
	if(optBalancedTree(root,&height))
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
