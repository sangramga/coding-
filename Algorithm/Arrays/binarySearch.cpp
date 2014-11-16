#include<iostream>
using namespace std;
int binarySearch(int *num, int elem, int low, int high)
{
	if(high==low)
	{
		if(num[high]==elem)
			return high;
		else
			return -1;
	}
	else
	{
		int mid = (low + high)/2;
		if(num[mid]==elem)
			return mid;
		if(num[mid]>elem)
			return binarySearch(num,elem,low,mid-1);
		else
			return binarySearch(num,elem,mid+1,high);
	}
}
int main()
{
	int n;
	cin>>n;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	int elem;
	cin>>elem;
	cout<<binarySearch(num,elem,0,n-1)<<endl;
	return 0;
}
