#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str1,str2,str3;
	cout<<"Enter string :";
	getline(cin,str1);
	cout<<"Enter string to insert :";
	getline(cin,str2);
	int pos;
	cout<<"Enter Position :";
	cin>>pos;
	str3=str1.insert(pos,str2);
	cout<<str3;
	return 0;
}
