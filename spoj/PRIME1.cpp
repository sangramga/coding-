#include<stdio.h>
#include<stdlib.h>
#include<cmath>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
	long long n,m;
	scanf("%lld %lld",&m,&n);
	long long arr[n-m+1];
	long long tmp = m;
       for(long long i =0;i<=(n-m);i++)
       {
	arr[i] = tmp;
	tmp++;
       } 
    	long long sqroot = (long long) (ceil(sqrt(n)));  
//       printf("sqroot = %lld\n",sqroot);	
	for(long long i =2;i<=sqroot;i++)
	{
		for(long long j = m;j<=n;j++)
		{
			if(j<=i)
			{
//				printf("array %lld : i = %lld j = %lld .thus break\n",arr[j],i,j);
				continue;
			}
			if(j!=i&&j%i==0){
				arr[j-m] = -1;
//				 printf("array = %lld: i = %lld j = %lld\n",arr[j],i,j);

		}
		}
	}
	 for(long long j = 0;j<=(n-m);j++)
	 {
		 if(arr[j]!= -1 && arr[j]!=1)
			 printf("%lld\n",arr[j]);
	 }
	}
	return 0;
}
