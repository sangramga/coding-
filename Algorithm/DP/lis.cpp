/* 
 * Dynamic programming problem
 * Time complexity = O(n*n)
 */
#include<iostream>
#include<stdlib.h>
using namespace std;
int lis(int *num, int n)
{
	int lisn = (int*)malloc(sizeof(int)*n);
	for(int i =0;i<n;i++)
		lisn[i] = 1;
	for(int i =1;i<n;i++)
		for(int j =0;j<i;j++)
		{
			if(num[j]<num[i]&&lisn[i]<lisn[j]+1)
				lisn[i] = 1 + lisn[j];
		}
	int max =0;
	for(int i =0;i<n;i++)
		if(lisn[i]>max)
			max = lisn[i];
	return max;
}
main()
{
	int n;
	cin>>n;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	cout<<lis(num,n)<<endl;
}
