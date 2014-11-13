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
int diameter(struct node *root)
{
	if(root==NULL)
		return 0;
	int lh = 0,rh =0;
	lh = height(root->left);
	rh = height(root->right);
	int ld = diameter(root->left);
	int rd  = diameter(root->right);
	return max(lh+rh+1, max(ld,rd));
}

int main()
{
	struct node *root = newnode(1);
	root->right = newnode(2);
	root->right->right = newnode(3);
	root->right->right->right = newnode(4);
	root->right->left = newnode(1);
	root->right->left->left = newnode(1);
	cout<<diameter(root)<<endl;
	return 0;
}
