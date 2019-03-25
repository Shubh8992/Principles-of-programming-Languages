#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"enter the operator";
	cin>>ch;
	switch(ch)
	{
		case '+':
			{
				cout<<"Addition of "<<a<<" and "<<b<<" is : "<<a+b;
				break;
			}
			case '-':
			{
				cout<<"Subtraction of "<<a<<" and "<<b<<" is : "<<a-b;
				break;
			}
			case '*':
			{
				cout<<"Multiplication of "<<a<<" and "<<b<<"is : "<<a*b;
				break;
			}
			case '/':
			{
				cout<<"Division of "<<a<<" and "<<b<<"is : "<<a/b;
				break;
			}
			case '%':
			{
				cout<<"Modulus of"<<a<<" and "<<b<<" are : "<<a%b;
				break;
			}
			default :
			{
				cout<<"Invalid Input";
			}
	}
}
