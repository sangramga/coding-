#include<iostream>
#include<stdlib.h>
using namespace std;
struct node 
{
	int a;
	int b;
};
int main()
{
	struct node* p = (struct node*)malloc(sizeof(struct node));
	p->a = 1;
	p->b = 2;
	cout<<"hello"<<endl;
	cout<<"a "<<p->a<<endl;
	cout<<"b "<<p->b<<endl;
	return 0;
}
