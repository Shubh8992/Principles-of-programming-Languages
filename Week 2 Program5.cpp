#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double cp,sp;
	cout<<"Enter the Cost Price : ";
	cin>>cp;
	cout<<"Enter the Selling Price : ";
	cin>>sp;
	if(cp>sp) cout<<((cp-sp)/cp)*100<<"% "<<"LOSS"<<endl;
	else if(sp>cp) cout<<((sp-cp)/cp)*100<<" % "<<"PROFIT"<<endl;
	else cout<<"NO Profit or LOSS"<<endl;
}
