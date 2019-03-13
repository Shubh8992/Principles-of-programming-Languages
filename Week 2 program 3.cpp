#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,i,j,num,flag,x=0;
	int a[n];
	cin>>n;
	for(i=2;i<=n;i++)
	{
		flag=0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0){
		a[x]=i;
		x++;
		}
	}
	cout<<"prime no's less than "<<n<<"are:\n";
	for(int i=0;i<x;i++)
	{
		cout<<a[i]<<" ";
	}
}
