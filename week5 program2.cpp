#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str3;
	cout<<"Enter string :";
	getline(cin,str1);
	
	int pos,n;
	cout<<"Enter Position :";
	cin>>pos;
	cout<<"Enter no. of characters to be deleted :";
	cin>>n;
	str3=str1.erase(pos,pos+n-1);
	cout<<str3;
	return 0;
}
