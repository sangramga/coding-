#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;
};
void inOrderTraversal(struct node* node)
{
	if(node==NULL)
		return ;
	inOrderTraversal(node->left);
	cout<<node->data<<" ";
	inOrderTraversal(node->right);
}
void preOrderTraversal(struct node* node)
{
	if(node==NULL)
		return ;
	cout<<node->data<<" ";
	preOrderTraversal(node->left);
	preOrderTraversal(node->right);
}
void postOrderTraversal(struct node* node)
{
	if(node==NULL)
		return;
	postOrderTraversal(node->left);
	postOrderTraversal(node->right);
	cout<<node->data<<" ";
}
int main()
{
	struct node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	inOrderTraversal(root);
	cout<<endl;
	preOrderTraversal(root);
	cout<<endl;
	postOrderTraversal(root);
	cout<<endl;
	return 0;
}
