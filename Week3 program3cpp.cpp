#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,r1,r2;
	cout<<"Standard Quadratic Equation is : ax^2+bx+c"<<endl;
	cout<<"Enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	r1=(-b+(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	r2=(-b-(sqrt(pow(b,2)-(4*a*c))))/(2*a);
	cout<<"The roots of "<<a<<"x^2+"<<b<<"x+"<<c<<"is "<<r1<<" and "<<r2;
}
