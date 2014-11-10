/* This probelms is to find the longest increasing subsequnce in a sequence 
 * this problem satisfy two properties of a dynamic programming 
 * (i)  overlapping subproblems :- since the answer of the smaller segments will be calculated in order to find the answer of the complete sequence 
 * (ii) optimally substructure :-  As the final answer is the sum of optimal values of the subproblems i.e it is the sum of longest subsequences found on the subsequences of the given sequence.
 * SOLUTION :- I will be using bottom up approach of dynamic programming to solve this problem in which i will be building a  table in which i will be storing the values of longest increasing subsequence till length 'i'.
 */
#include<iostream>
#include<string>
using namespace std;
int max(int a, int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int lis(string str1, string str2, int m, int n)
{
	int len[m+1][n+1];
	for(int i =0;i<=m;i++)
	{
		for(int j =0;j<=n;j++)
		{
			if(i==0||j==0)
				len[i][j] = 0;
			else if(str1[i]==str2[j])
				len[i][j] = 1 + len[i-1][j-1];
			else
				len[i][j] = max(len[i-1][j],len[i][j-1]);
		}
	}
	return len[m][n];
}
main()
{
	string str1, str2;
	cin>>str1>>str2;
	cout<<lis(str1,str2,str1.size(),str2.size())<<endl;
}
