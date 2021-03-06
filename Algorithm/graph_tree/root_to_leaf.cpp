//Given a binary tree, print out all of its root-to-leaf paths one per line.
#include <iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int path[1000],l =0;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newnode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right =  NULL;
	return node;
}
void print_path(int path[],int l)
{
	for(int i =0;i<l;i++)
		cout<<path[i]<<" ";
	cout<<endl;
}
void print_all_path(struct node* node, int path[],int l)
{
	if(node==NULL)
		return ;
	path[l] = node->data;
	l++;
	if(node->left==NULL&&node->right==NULL)
		print_path(path,l);
	else
	{
		print_all_path(node->left,path,l);
		print_all_path(node->right,path,l);
	}
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
	struct node* root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
	root->right = newnode(2);
	root->left = newnode(3);
	root->right->right = newnode(4);
	root->right->left = newnode(5);
	root->left->right = newnode(6);
	root->left->left = newnode(7);
	print_all_path(root,path,l);
	return 0;
}
