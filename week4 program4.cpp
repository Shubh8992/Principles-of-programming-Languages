#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int size1,int arr2[],int size2)
{
    int i=0,j=0,k=0,arr3[100];  
	while( (i < size1) && (j < size2) )
	{
		if( arr1[i] < arr2[j] )
			arr3[k++]=arr1[i++];
		else
			arr3[k++]=arr2[j++];
	}
	while( i < size1 )
		arr3[k++]=arr1[i++];
	while( j < size2 )
		arr3[k++]=arr2[j++];
	for(int i=0;i<size1+size2;i++)
	{
		cout<<arr3[i]<<" ";
	}
}
int main()
{
	int n,m;
	cout<<"enter size of first array:";
	cin>>n;
	int a[n];
	cout<<"enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter size of second array:";
	cin>>m;
	int b[n];
	cout<<"enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	merge(a,n,b,m);	
}
