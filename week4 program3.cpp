#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,value,pos=0,neg=0,even=0,odd=0;
	cout<<"enter size:";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>value;
		if(value%2==0)
		even++;
		if(value%2!=0)
		odd++;
		if(value>0)
		pos++;
		if(value<0)
		neg++;
	}
	cout<<"No. of positive integer:"<<pos<<"\n";
	cout<<"No. of negative integer:"<<neg<<"\n";
	cout<<"No. of even integer:"<<even<<"\n";
	cout<<"No. of odd integer:"<<odd<<"\n";
}
