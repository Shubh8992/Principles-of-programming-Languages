#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter size of array:";
	cin>>n;
	int a[n],key,frequency=0;
	cout<<"enter elements of array:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter element whose frequency you want to calculate:";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		frequency++;
	}
	cout<<"Frequency of "<<key<<"is "<<frequency;
}
