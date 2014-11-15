#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,k;
    cin>>n>>k;
    char str[n];
    for(int i =0;i<n;i++)
        cin>>str[i];
    for(int i =0;i<n;i++)
        cout<<str[(n-k+i)%n]<< " ";
    cout<<endl;
    return 0;
}
