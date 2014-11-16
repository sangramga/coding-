#include<iostream>
using namespace std;
int pivotElement(int *num, int low, int high)
{
	if(low>high)
		return -1;
	if(high==low)
		return low;
	int mid = (high + low)/2;
	if(mid<high && num[mid] > num[mid+1])
		return mid;
	if(mid>low && num[mid] < num[mid -1])
		return mid -1;
	if(num[mid]>num[high])
		return pivotElement(num,mid,high);
	else
		return pivotElement(num,low,mid);
}
int binarySearch(int *num, int elem , int low, int high)
{
//	cout<<"Binary search from "<<low<<" to "<<high<<endl;
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
                        return binarySearch(num,elem,low,mid);
                else
                        return binarySearch(num,elem,mid+1,high);
        }
}
	
int searchElem(int *num, int n , int elem)
{
	int pivot = pivotElement(num,0,n-1);
//	cout<<"Piovt elem at "<<pivot<<endl;
	if(pivot==-1)
		return binarySearch(num,elem,0,n-1);
	else
	{
		if(num[pivot]==elem)
			return pivot;
		else
		{
			if(num[pivot]>elem&&num[0]<elem)
				return binarySearch(num,elem,0,pivot);
			else
				return binarySearch(num,elem,pivot+1,n-1);
		}
	}
}


int main()
{
	int n ;
	cin>>n;
	int num[n];
	for(int i =0;i<n;i++)
		cin>>num[i];
	int tmp;
	cin>>tmp;
	int ans = searchElem(num,n, tmp);
	if(ans)
		cout<<"Number is present at position "<<ans<<" and is confirmed "<<num[ans]<<endl;
	else
		cout<<"Number is not present\n";
	return 0;
}
