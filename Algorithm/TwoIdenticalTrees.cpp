#include<iostream>
#include<stdlib.h>
using namespace std;
struct node {
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data  = data;
	node->left = NULL;
	node->right = NULL;
	return node;
}
int identicalTrees(struct node* root, struct node* root1)
{
	if(root1==NULL&&root==NULL)
		return 1;
	else if(root!=NULL&&root1!=NULL)
	{
		return (root->data==root1->data)&&identicalTrees(root->right,root1->right)&&identicalTrees(root->left,root1->left);
	}
	else
		return 0;
}
int main()
{
	struct node* root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
	root->right = newnode(2);
	root->left = newnode(3);
	root->right->left = newnode(4);
	root->left->right = newnode(5);
	struct node* root1 = (struct node*)malloc(sizeof(struct node));
        root1 = newnode(1);
        root1->right = newnode(2);
        root1->left = newnode(3);
        root1->right->left = newnode(4);
        root1->left->right = newnode(5);

	int t = identicalTrees(root,root1);
	if(t)
		cout<<"trees are identical\n";
	else
		cout<<"Trees are not identical\n";
	return 0;
}
