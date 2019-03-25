#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		char ch;
		cout<<"Enter any Character : ";
		cin>>ch;
		if(ch>=65 && ch<=90) 
		cout<<"Capital Letter\n";
		else if(ch>=97 && ch<=122) 
		cout<<"Small Letter\n";
		else if(ch>=48 && ch<=57) 
		cout<<"A Digit\n";
		else if((ch>=0 && ch<=47) || (ch>=58 && ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127)) 
		cout<<"Special Character\n";
		}
	}
