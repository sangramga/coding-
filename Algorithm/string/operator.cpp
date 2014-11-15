#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main()
{
	stack<int>mystack;
	stack<int>fstack;
	char str[10000];
	cin>>str;
	char *pch;
	 pch = strtok(str,"+,*");
	 while(pch!=NULL)
	 {
		 cout<<pch<<endl;
		 cout<<stoi(pch,10)<<endl;
		  pch = strtok(NULL,"+,*");
	 }
	return 0;
}
