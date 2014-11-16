#include<iostream>
using namespace std;
int median(int *num1,int l1, int h1, int *num2, int l2, int h2)
{
	int d1 = h1-l1+1;
	int d2 = h2-l2 +1;
	int m1, m2;
	if(d1%2==0)
	{
		 m1 = (num1[d1/2] + num1[d1/2 +1])/2;
                 m2 = (num2[d2/2] + num2[d2/2 +1])/2;
	}
	else
	{
                 m1 = num1[d1/2];
		 m2 = num2[d2/2];
	}
	if(m1==m2)
		return m1;
	if(m1>m2)
	{
		if(d1%2==0)
			return median (num1,l1,d1/2 -1,num2,d2/2,h2);
		else
			return median(num1 , l1,d1/2,num2, d2/2,h2);
	}
	else
	{
		if(d1%2==0)
			return median(num1,d1/2,h1,num2,l2,d2/2 -1);
		else
			return median(num1, d1/2,h1,num2,l2,d2/2);
	}
}


int main()
{
	int n1,n2;
	cin>>n1;
	n2 = n1;
	int num1[n1],num2[n2];
	for(int i =0;i<n1;i++)
		cin>>num1[i];
	for(int i =0;i<n2;i++)
		cin>>num2[i];
	cout<<median(num1,0,n1-1,num2,0,n2-1)<<endl;
	return 0;
}
