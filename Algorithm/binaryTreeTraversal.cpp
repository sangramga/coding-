#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct node {
                int data;
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
void preOrder(struct node* node)
{
		if(node=NULL)
			return ;
		int data = node->data;
		cout<<data<<" ";
		preOrder(node->left);
		preOrder(node->right);
}
int main()
{
        struct node *root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	root->left->left = newnode(4);
	root->left->right = newnode(5);
	cout<<"Preorder Traversal : ";
	preOrder(root);
        return 0;
}

