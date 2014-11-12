#include<iostream>
#include<stdlib.h>
using namespace std;
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
}
int height(struct node* root)
{
	if(root==NULL)
		return 0;
	else
		return 1+ max(height(root->right),height(root->left));
}
int main()
{
	struct node* root = newnode(1);
	root->right = newnode(2);
	root->right->right = newnode(3);
	cout<<height(root)<<endl;
	return 0;
}

