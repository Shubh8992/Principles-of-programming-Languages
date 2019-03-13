#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,a,sum=0;
	cout<<"enter number:";
	cin>>n;
	while(n>0)
	{
		a=n%10;
		sum+=a;
		n=n/10;
	}
	cout<<"sum of digits:"<<sum;
}
