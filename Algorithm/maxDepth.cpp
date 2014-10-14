#include<iostream>
#include<stdlib.h>
using namespace std;
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node*));
	node->data= data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
int maxDepth(struct node* node,int n)
{
	if(node==NULL)
		return n;
	else
	{
		n++;
		return max(maxDepth(node->left,n),maxDepth(node->right,n));
	}
}

int main()
{
	struct node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->right->left = newNode(4);
	root->right->right = newNode(5);
	root->right->right->right= newNode(6);
	cout<<"Max depth of tree is : "<<maxDepth(root,0)<<endl;
	return 0;
}
