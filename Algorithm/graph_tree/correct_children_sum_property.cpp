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
	node->data= data;
	node->left =  NULL;
	node->right = NULL;
	return node;
}
void correctTree(struct node *root)
{
	if(root==NULL||(root->left==NULL&&root->right==NULL))
		return ;
	correctTree(root->left);
	correctTree(root->right);
	int diff = root->data - (root->left->data + root->right->data);
	if(diff>0)
	{
		cout<<"left child of "<<root->data<<" with children lleft "<<root->left->data<<" and right  "<<root->right->data<<" to ";
		root->left->data += diff;
		cout<<root->left->data<<endl;
	}
	else
	{
                cout<<"root  "<<root->data<<" with children lleft "<<root->left->data<<" and right  "<<root->right->data<<" to ";
		root->data += (-diff);
		cout<<root->data<<endl;
	}
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
void inorder(struct node* root)
{
	if(root==NULL)
		return ;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

int main()
{
	struct node *root = newnode(1);
	root->right = newnode(2);
	root->left = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	correctTree(root);

	if(sumProperty(root))
		cout<<"This tree satisfy the sum property\n";
	else
		cout<<"This tree does not satisfy the sum property\n";

	return 0;
}
