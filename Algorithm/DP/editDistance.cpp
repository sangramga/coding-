/*
 * This is a good dynamic programming problem 
 * problem is to find a recursive relation for the problem
 * problem is that we have to transform first string into second string using minimum number of edits
 * we can use Insert, Replace and Delete operations in this problem. 
 * here the logic is that for every alphabet of first string we will calculate which operation will lead to a minimum cost
 * time complexity = O(m*n)
 */
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int min(int a , int b , int c)
{
	if(a<b)
		if(a<c)
			return a;
		else
			return c;
	else
		if(b<c)
			return b;
		else
		return c;
}
int editDis(string str1, string str2)
{
	int n = str1.size()+1;
	int m = str2.size() +1;
	int prev[m] ;
	int curr[m];
	for(int i =0;i<m;i++)
		prev[i] = i;
	for(int i =1;i<n;i++)
	{
		curr[0] = i;
		for(int j = 1;j<m;j++)
			curr[j] = min(prev[j] +1,curr[j-1] +1,prev[j-1] + (str1[i]!=str2[j]));
		for(int k =0;k<m;k++)
			prev[k] = curr[k];
	}
	return curr[m-1];
}


main()
{
	int t;
	cin>>t;
	while(t--){
	string str1 , str2;
	cin>>str1>>str2;
	cout<<editDis(str1, str2)<<endl;
}}
