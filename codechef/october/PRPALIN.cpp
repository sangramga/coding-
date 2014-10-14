#include<iostream>
#include<math.h>
#include<stdio.h>
#include<vector>
using namespace std;
int isPrime(int n)
{
	int p =1;
	for(int i =2;i<=sqrt(n)+1;i++)
	{
		if(n%i==0){
			p =0;
			break;
		}
	}
	return p;
}
int isReverse(int  n)
{
	int org = n;
	int tmp = 0;
	while(n>0)
	{
		tmp*=10;
		tmp+= (n%10);
		n/=10;
	}
	if(tmp==org)
		return 1;
	else
		return 0;
}
int main()
{
	int  n;
	scanf("%d",&n);
	while(true)
	{
		if(isReverse(n))
			if(isPrime(n)){
			printf("%d\n",n);
			break;
		}
		n++;
	}
	return 0;
}
