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
	node->right =NULL;
	return node;
}
void inorder(struct node* root)
{
        if(root==NULL)
                return ;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
}
void deleteTree(struct node *root)
{
	if(root==NULL)
		return ;
		deleteTree(root->left);
		deleteTree(root->right);
		cout<<"Deleting node with data = "<<root->data<<endl;
		free(root);

}
void _deleteTree(struct node *root)
{
	deleteTree(root);
	root = NULL;
}
	
int main()
{
	struct node *root = (struct node*)malloc(sizeof(struct node));
	root = newnode(1);
	root->left = newnode(2);
	root->right = newnode(3);
	deleteTree(root);
	return 0;
}
